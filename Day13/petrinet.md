# dockerでJava
## Q1 docker上で作業するにはどこから始めるのがいいでしょうか。dockerfileを使わずにＪａｖａを動かしたいです。
A1 Jemini
Dockerfileを書かずにDocker上でJavaを動かすなら、「公式のJava（JDK）イメージをそのまま立ち上げて、コンテナ内のインタラクティブシェル（bash/sh）に入る」ところから始めるのが一番わかりやすくておすすめです。

以下に最小限の手順をまとめました。

---

## ステップ 1: JDKが入ったDockerコンテナを起動して中に入る

ターミナル（Command Prompt / PowerShell / Terminal）で以下のコマンドを実行します。

```bash
docker run -it --name my-java-env openjdk:17 bash

```

> **コマンド解説:**
> * `docker run`: コンテナを作成・起動する
> * `-it`: コンテナの標準入力を開き、ターミナルで直接操作（対話）できるようにする
> * `--name my-java-env`: コンテナに `my-java-env` という名前をつける（省略可）
> * `openjdk:17`: 使用するDockerイメージ（Java 17の公式イメージ。初回は自動ダウンロードされます）
> * `bash`: コンテナ起動後に実行するシェル（コンテナ内の操作画面に入る）
> 
> 

実行すると、プロンプトが `root@xxxxxxxxx:/#` のように変わり、**コンテナの中に入った状態**になります。

---

## ステップ 2: Javaの動作確認とプログラムの実行

コンテナの中に入ったら、すでにJava環境が整っています。

### 1. バージョン確認

```bash
java -version
javac -version

```

### 2. その場でJavaファイルを作成して動かす

簡易的なコードであれば、`cat` コマンドで作成するのが簡単です。

```bash
cat << 'EOF' > Main.java
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello from Docker!");
    }
}
EOF

```

### 3. コンパイルと実行

```bash
javac Main.java
java Main

```

`Hello from Docker!` と表示されれば成功です！

---

## ステップ 3: ローカル（PC）のソースコードをDockerで動かす場合

コンテナの中で毎回コードを書くのは大変なので、**ホストPC上のフォルダをDockerにマウント（共有）して動かす**のが実務でよく使われる方法です。

PC上のJavaファイル（例: `Main.java`）があるフォルダに移動し、以下のコマンドを実行します。

```bash
# PowerShell / bash の場合（現在のディレクトリを共有）
docker run -it --rm -v "${PWD}:/app" -w /app openjdk:17 bash

# コマンドプロンプト(cmd) の場合
docker run -it --rm -v "%cd%:/app" -w /app openjdk:17 bash

```

> **追加オプション:**
> * `-v "%cd%:/app"`: PCの現在地（`%cd%`や`${PWD}`）を、コンテナ内の `/app` フォルダとして共有する
> * `-w /app`: コンテナ起動時の作業フォルダ（Working Directory）を `/app` に指定する
> * `--rm`: コンテナ終了時に自動でコンテナを削除して後片付けする
> 
> 

これで、**PC上のVS Codeやエディタでコードを書きながら、実行だけをDocker上で行う**ことが可能になります。

---

## よく使う後片付けコマンド

コンテナを抜けるときは `exit` と入力します。

* **停止したコンテナの一覧確認:**
```bash
docker ps -a

```


* **作成したコンテナに再進入する:**
```bash
docker start -ai my-java-env

```


* **不要になったコンテナの削除:**
```bash
docker rm my-java-env

```



まずは **ステップ 1** を実行して、Dockerの中にJava環境がすぐ手に入る感覚を試してみてください！

## Q2 docker run -it openjdk:17 bashとしたら
Unable to find image 'openjdk:17' locally
docker: Error response from daemon: failed to resolve reference "docker.io/library/openjdk:17":
docker.io/library/openjdk:17: not found
Run 'docker run --help' for more information
というエラーがでました。どうしたらいいですか。
A2 
`openjdk` の公式Dockerイメージは非推奨（Deprecated）になり、Docker Hubから削除・アーカイブされたため、そのエラーが発生しています。

現在は `openjdk` の代わりに、標準的に使われている**Eclipse Temurin（Adoptium）**や**Amazon Corretto**などの正式なJavaイメージを使用します。

---

## 解決策：以下のコマンドに置き換えて実行する

`openjdk:17` の部分を `eclipse-temurin:17` に変えるだけで、そのまま動作します。

```bash
docker run -it eclipse-temurin:17 bash

```

### 他のメジャーなJavaイメージ（どれを使ってもOKです）

* **Amazon Corretto（AWS公式のJava環境）:**
```bash
docker run -it amazoncorretto:17 bash

```


* **UbuntuベースのJava環境:**
```bash
docker run -it ubuntu:22.04 bash

```


*(※Ubuntuイメージの場合は、中に入ってから `apt update && apt install -y openjdk-17-jdk` を実行します)*

---

## なぜエラーになったのか？（背景）

2022年頃より、Docker Hub上の `openjdk` 公式イメージはメンテナンスが終了し、非推奨となりました。そのため、現在はAdoptiumプロジェクトが提供する `eclipse-temurin` などが事実上の標準ディストリビューションとして利用されています。

まずは一番上の `eclipse-temurin:17` コマンドでお試しください！

# docker
> mkdir java


    ディレクトリ: C:\Users\kunren


Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
d-----        2026/07/22     10:18                java

docker run -v ./java:/tmp/java -it java /bin/bash
Unable to find image 'java:latest' locally
docker: Error response from daemon: failed to resolve reference "docker.io/library/java:latest": docker.io/library/java:latest: not found

Run 'docker run --help' for more information
PS C:\Users\kunren> docker run -v ./java:/tmp/java -it ubuntu /bin/bash
Unable to find image 'ubuntu:latest' locally
latest: Pulling from library/ubuntu
a3679419df18: Pull complete
ed819469700f: Pull complete
e16351a257e4: Download complete
Digest: sha256:3131b4cc82a783df6c9df078f86e01819a13594b865c2cad47bd1bca2b7063bb
Status: Downloaded newer image for ubuntu:latest


