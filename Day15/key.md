# Q1 扉をあける電子鍵を４bitCPUの状態遷移をplantUMLで記述してください。
A1 by gemini

電子鍵（スマートロック）を制御する **4bit CPU** の状態遷移図を PlantUML で作成しました。

防犯性・実用性を考慮し、一般的な CPU サイクル（Fetch → Decode → Execute）に加え、**「キーパッド入力受付（暗証番号照合）」「暗証番号一致判定（ALU判定）」「ソレノイド（解錠機構）駆動」「パスワード試行回数エラーによるセキュリティロック（アラーム）」** を組み込んだ状態遷移となっています。

---

### PlantUML 状態遷移図コード

```plantuml
@startuml
skinparam state {
  BackgroundColor White
  BorderColor Black
}

[*] --> S_RESET : 電源投入 / リセット

state S_RESET {
  S_RESET : ・PC = 4'b0000
  S_RESET : ・レジスタ初期化 (入力桁数=0, 認証エラー回数=0)
  S_RESET : ・電子鍵: 施錠 (Solenoid OFF)
}

S_RESET --> S_SLEEP : 初期化完了

state S_SLEEP {
  S_SLEEP : ・低消費電力モード
  S_SLEEP : ・キーパッド入力 (ボタン割り込み) を待機
}

S_SLEEP --> S_FETCH : キー入力割り込み

state S_FETCH {
  S_FETCH : ・命令フェッチ (ROM[PC] -> IR)
  S_FETCH : ・IR = 4bit Opcode
}

S_FETCH --> S_DECODE

state S_DECODE {
  S_DECODE : ・命令解読 (Opcodeの判定)
}

state 命令分岐 <<choice>>
S_DECODE --> 命令分岐

命令分岐 --> S_EXEC_KEY_IN : [キー入力命令]
命令分岐 --> S_EXEC_MATCH  : [照合判定命令]
命令分岐 --> S_GOTO_SLEEP  : [スリープ遷移命令]

state S_EXEC_KEY_IN {
  S_EXEC_KEY_IN : ・入力された数字(4bit)をバッファレジスタに格納
  S_EXEC_KEY_IN : ・入力桁数カウンタ + 1
}

state S_EXEC_MATCH {
  S_EXEC_MATCH : ・4bit ALUで「入力値」と「登録暗証番号」を比較判定
}

state 照合結果判定 <<choice>>
S_EXEC_MATCH --> 照合結果判定

照合結果判定 --> S_UNLOCK     : [一致] (認証成功)
照合結果判定 --> S_AUTH_ERROR : [不一致] (認証失敗)

state S_UNLOCK {
  S_UNLOCK : ・ソレノイドON (扉を解錠)
  S_UNLOCK : ・解錠タイマー起動 (例: 5秒間)
  S_UNLOCK : ・エラーカウンタを0にリセット
}

S_UNLOCK --> S_LOCK : 解錠タイマータイムアウト

state S_LOCK {
  S_LOCK : ・ソレノイドOFF (自動施錠)
}

state S_AUTH_ERROR {
  S_AUTH_ERROR : ・エラーカウンタ + 1
  S_AUTH_ERROR : ・警告ブザー発音
}

state エラー限界判定 <<choice>>
S_AUTH_ERROR --> エラー限界判定

エラー限界判定 --> S_LOCKOUT : [エラー 3回連続]
エラー限界判定 --> S_UPDATE  : [エラー 3回未満]

state S_LOCKOUT {
  S_LOCKOUT : ・セキュリティロックダウン (一定時間キー入力を無効化)
  S_LOCKOUT : ・警告アラーム出力
}

S_LOCKOUT --> S_RESET : ロックダウン時間経過 / 管理者リセット

S_EXEC_KEY_IN --> S_UPDATE
S_LOCK --> S_UPDATE

state S_UPDATE {
  S_UPDATE : ・PC <- PC + 1 (または 分岐先アドレス)
  S_UPDATE : ・ステータスLED / ブザー出力同期
}

S_UPDATE --> S_FETCH      : [次の処理へ]
S_UPDATE --> S_GOTO_SLEEP  : [入力待ち / 処理完了]
S_GOTO_SLEEP --> S_SLEEP

@enduml

```

---

### ステート（状態）の解説

1. **S_RESET（初期化）**
* システム起動時の初期化処理。電子鍵を確実に施錠（ソレノイドOFF）し、入力バッファや認証エラー回数をリセットします。


2. **S_SLEEP（待機・省電力）**
* 電池消耗を抑えるため普段はスリープ状態です。テンキーのいずれかのボタンが押されると割り込み信号が発生し、復帰します。


3. **S_FETCH / S_DECODE（命令読み出し・解読）**
* ROMから4bitの命令（Opcode）を取り出し、テンキー入力処理・暗証番号照合・スリープ移行などの動作パターンを判別します。


4. **S_EXEC_KEY_IN（キー入力受け取り）**
* 押されたテンキーの4bit数値データを入力バッファ（レジスタ）に保存し、入力桁数を更新します。


5. **S_EXEC_MATCH（暗証番号照合）**
* 4bit ALU（論理演算回路）を用いて、入力された暗証番号と内部ROMに保持された正解コードを比較します。


6. **S_UNLOCK / S_LOCK（解錠・自動再施錠）**
* **認証成功時:** ソレノイドを駆動させてソレノイドをONにし、扉を解錠します。一定時間（オートロックタイマー）経過後、自動的に再施錠（S_LOCK）します。


7. **S_AUTH_ERROR / S_LOCKOUT（失敗処理・防犯ロックダウン）**
* **認証失敗時:** エラーカウンタをインクリメントし、失敗ブザーを鳴らします。
* **3回連続失敗時:** いたずら・不正解錠を防ぐため `S_LOCKOUT`（一定時間の操作不可・警告アラーム）へ遷移します。



> **提示したアーキテクチャのポイント**
> 必要に応じて、このPlantUML状態遷移図をベースにした **Verilog HDLソースコード** や **テストベンチ（シミュレーション環境）** の作成も可能です。


<img width="646" height="813" alt="image" src="https://github.com/user-attachments/assets/66200712-4709-4d33-8bc3-992f22047016" />

<img width="525" height="114" alt="image" src="https://github.com/user-attachments/assets/8c0be001-b38d-454a-abd0-056d81113c7b" />
