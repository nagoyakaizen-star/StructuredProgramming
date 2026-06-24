Q1 pccをコンパイルしようとdocker上で以下の作業をしたら最後に表示するエラーが出ました。なにをどうするといいでしょうか。
apt update; apt –y upgrade; apt install vim git bison flex build-essential
git clone https://github.com/PortableCC/pcc.git
cd pcc
./configure
 make && make install
Error 1 make[2]: Leaving directory '/home/source/pcc/cc/ccom' make[1]: *** [Makefile:12: all] Error 2 make[1]: Leaving directory '/home/source/pcc/cc' make: *** [Makefile:12: all] Error 2
<img width="3514" height="442" alt="image" src="https://github.com/user-attachments/assets/615c6b0c-be21-4424-8879-faa6d733a67d" />

A1
提示していただいたエラーは、`make` が途中で失敗したこと（エラーコード2）を示していますが、残念ながらこのログには「具体的に何が原因でエラーになったか」という詳細（コンパイルエラーやリンクエラーの中身）が写っていません。

`pcc/cc/ccom`（コンパイラ本体のコア部分）のディレクトリ内で、C言語のコードや `bison`/`flex` で生成したファイルのビルド中に何かが引っかかった可能性が高いです。

解決に向けて、まずは**本当の原因を突き止める方法**と、**pcc特有のよくある原因と対策**を解説します。

---

## 1. 本当の原因（エラーの詳細）を確認する

原因を特定するために、以下のコマンドを実行してエラーログだけを画面に出すか、ファイルに保存して確認してください。

```bash
# ccom ディレクトリに移動して、単体で make を実行してみる
cd /home/source/pcc/cc/ccom
make

```

これで画面に止まった直前の行に `error: ...` や `undefined reference to ...` といった具体的なエラーメッセージが表示されます。

---

## 2. よくある原因と対策

PCC（Portable C Compiler）をUbuntuなどの最新のLinux（Docker）環境でビルドする場合、以下の問題がよく発生します。

### 原因A: `pcc-libs` が足りない、または配置場所が違う

PCCは、コンパイラ本体の `pcc` リポジトリだけでなく、標準ライブラリ等のコードが含まれる `pcc-libs` も同時にビルド、あるいは参照させる必要があります。

**【対策】**
一世代前のビルド構成の場合、同じ階層に `pcc-libs` がないと `configure` や `make` でヘッダやライブラリが見つからずエラーになることがあります。

```bash
cd /home/source
git clone https://github.com/PortableCC/pcc-libs.git
# 必要に応じて、pcc-libs 側も事前に ./configure && make しておく、
# もしくは pcc の configure 時にパスを指定するなどの対応が必要です。

```

### 原因B: `byacc`（Berkeley Yacc）が必要なケース

PCCは歴史的な経緯から、GNUの `bison` ではなく **`byacc`** を強く推奨、あるいは前提としているコードが含まれている場合があります。`bison` だと文法ファイル（`.y`）の解釈でコンパイルエラーが出ることがあります。

**【対策】**
`byacc` をインストールして再度試してみてください。

```bash
apt install -y byacc
cd /home/source/pcc
make clean
./configure
make

```

### 原因C: 最新の `gcc` のチェックが厳しすぎる

Dockerのベースイメージ（Ubuntuなど）が最新の場合、同梱されている `gcc` のエラーチェックが厳しく、昔のC言語の記述（型宣言の省略や暗黙の関数宣言など）に対して警告ではなく「エラー」として処理を止めてしまうことがあります。

**【対策】**
コンパイラ（gcc）のチェックを緩くするフラグを `configure` 時に渡します。一度綺麗にしてから以下を試してください。

```bash
cd /home/source/pcc
make clean

# 古いC言語の仕様（C89など）を許容するフラグを立てて configure する
CFLAGS="-O2 -std=gnu89 -w" ./configure

make

```

* `-std=gnu89`: 古い規格でコンパイルします。
* `-w`: すべての警告（Warning）を無視してエラーによる停止を防ぎます。

---

## おすすめの解決手順まとめ

まずは以下の手順で環境を整え、チェックを緩くして試すのが一番手っ取り早いです。

```bash
# 1. 不足しがちなツール（byacc）を追加
apt update && apt install -y byacc

# 2. ソースディレクトリを綺麗にする
cd /home/source/pcc
make clean

# 3. 警告を無視するオプション付きで再設定
CFLAGS="-w" ./configure

# 4. エラーの詳細が見やすいように、並列処理(j)を入れずに make
make

```

もしこれでもエラーが出る場合は、`make` を実行した直後に画面に出る **`Error 1` の数行上に書かれている英語のエラーメッセージ**（`xxx.c:30: error:...` など）を教えていただければ、より確実な修正方法をお答えできます！
