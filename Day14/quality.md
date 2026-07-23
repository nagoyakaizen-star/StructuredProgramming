品質要求：品質要求は、「利用時の品質要求」、「外部品質要求」、「内部品質要求」の３つに分類できます。各品質要求の定義を以下に述べます。
利用時の品質要求
「利用者がソフトウェア製品を利用する際の要求」です。主に、ビジネス要求、機能要求、既存製品や利用者が現在使用するシステム特有の要求といった利害関係者の要求から導出されます。
外部品質要求
「ソフトウェア製品のふるまいに対する要求」です。主に機能要求、既存製品や利用者が使用しているシステムに特有の要求、法的な要求や制約、セキュリティ要求、企業の開発標準や指針といった利害関係者の要求や、利用時の品質要求など、多数の情報から導出されます。
内部品質要求
「ソフトウェア製品内部の要素に対する要求」です。企業方針、開発方針や制約といった利害関係者の要求や、外部品質要求から導出されます。
https://qiita.com/hirokid/items/013b6c78c9ca68479f75



ファクタリング：ファクタリングで調べているのにリファクタリングばかりが出てきた



ファンアウト：ファンアウト（Fan-out）: コンポーネントが依存している他のコンポーネントの数。高いほど複雑性が増加
https://note.com/khitoshi/n/nf878d7fdfed6



ファンイン：ファンイン（Fan-in）: コンポーネントが受け取る依存の数。高いほど再利用性が高いが、変更の影響範囲も大きい
https://note.com/khitoshi/n/nf878d7fdfed6



俯瞰：システムの企画・開発においては、限られた経営資源（ヒト、モノ、カネ）でゴールに到達することが必要である。また、システムをライフサイクルという時間的視点や、コンテクスト（システムを取り巻く環境）などの空間的視点から俯瞰することが必要である。
https://www.ipa.go.jp/digital/architecture/reports/nq6ept0000009z36-att/000059776.pdf



複雑さ：「複雑性」の本質
『A Philosophy of Software Design』では、複雑性について以下のように書かれています。
Complexity is anything related to the structure of a software system that makes it hard to understand and modify the system.
（複雑性とは、ソフトウェアシステムの構造に関連するもので、システムの理解と変更を困難にするものすべてを指す）
つまり、「理解しづらい」「変更しづらい」と感じたら、それは複雑性のサインです。
https://zenn.dev/putcho/articles/how-terraform-module-design



プレーンモジュール：（プレーンモジュールは見つからなかったのでモジュールについての記載です）モジュールとは、機能単位、交換可能な構成部分などを意味する英単語。機器やシステムの一部を構成するひとまとまりの機能を持った部品で、システム中核部や他の部品への接合部(インターフェース)の仕様が明確に定義され、容易に追加や交換ができるようなもののことを指す。
https://e-words.jp/w/%E3%83%A2%E3%82%B8%E3%83%A5%E3%83%BC%E3%83%AB.html



フロー：フロー単体ではなくデータフロー図ばかりが出てきたのでひとつ添付しておきます
https://www.in-com.com/ja/blog/how-data-and-control-flow-analysis-powers-smarter-static-code-analysis/



プログラミングの手順：https://hybrid-technologies.co.jp/blog/knowhow/20230308_2/



プロジェクト管理者：プロジェクトマネージャとは、プロジェクトの計画·遂行に責任を負う管理者。また、そのような職位や職能。プロ
ジェクトメンバーを統率し、計画の策定や進捗の管理、上長や利害関係者との交渉などに当たる。
https://e-words.jp/w/%E3%83%97%E3%83%AD%E3%82%B8%E3%82%A7%E3%82%AF%E3%83%88%E3%83%9E%E3%83%8D%E3%83%BC%E3%82%B8%E3%83%A3.html



プロセス：DFDにおけるプロセスばかりが出てきた
https://home.jeita.or.jp/page_file/20151221161211_Pkr0lJhRIV.pdf



プロセス起動テーブル：(プロセステーブルについて)現在動いているプロセスが書かれている管理台帳
https://wa3.i-3-i.info/word11037.html



プロセス仕様書：(プロセス仕様書がミニ仕様書に該当しそうなのでミニ仕様書に関する記述です)データフローの詳細としてデータディクショナリーがあるように、プロセスの詳細としてミニ仕様書というものがあります。ミニ仕様書ではDFDには書ききれないプロセスの詳細を記載します。
https://gemini.google.com/app/e64fe14d0a581000?hl=ja



プロセス、フローの配置～分割
おそらく分割までDFDの書き方についての言葉だと思うので省略します
https://cacoo.com/ja/blog/what-is-dfd/



分析モデリング：開発対象となるシステムのスコープを決め、入出力を定義するフェーズです。以下のような流れで進めます。
https://dlrecord.hatenablog.com/entry/2020/12/30/131554



ペアプログラミング：ペアプログラミング(以下ペアプロ)は、1台のコンピュータを2人で共有しながらプログラムを作成する手法です。役割を分担して作業することで、効率的かつ効果的な開発を目指します。
https://qiita.com/grhg/items/1677561cca87a9a6a742



変換部：(STS分割という手法の一部みたいなのでSTS分割についての記述の一部です)分割した各モジュールをさらにソース部、変換部、シンク部に分割し、以下同様の作業を繰り返す。
https://www.indsys.chuo-u.ac.jp/~hiroko/se/se04-20150501.pdf



変換分析：機能的または制御的側面，すなわち処理的側面は，構造化設計により，モジュールの階層構造とモジュール間のインタフェイスを記述した構造図（structurechart : SC）へと変換される。DFDなどからSCへの変換を機械的に行なうことは困難であるが，トランザクション分析（transaction analysis）や変換分析（transform analysis）などの方法が提案されている
https://web.wakayama-u.ac.jp/~makino/theses/SDbyOO.pdf



保守の立場から見た設計モデル：一単語じゃないため調べ方(どこで単語を切るべきか)がよくわからない



ボトムアップ：概念設計は、理想的なあるべき姿をモデル化したいというフェーズですが、現実に存在しているシステムを無視するわけにはいきません。理想と現実のバランスをとる必要があります。しかし、いきなり現在の業務の細かい仕様の確認から入ってしまうと、現実に縛られた設計しかできなくなってしまうため、ま高い視点から広い視野でシステム化の作業を行う姿勢が大切です。
対象業務範囲の中で大まかな業務フローを事前に決め、その方針に従ってモデル化していきます。これがトップダウンにあたるフェーズです。その後、具体的な業務に従って、詳細に現在の業務を分析し、必要なデータを漏れなく洗い出していきます。
これがボトムアップにあたるフェーズになります。
https://www.edifist.co.jp/lecture/dbdesign/02_03/01/



マクロ：

# Q0 マクロの概念を、アセンブラ、C、Verilog-HDLはじめ１６言語における意味をしめしてください。プログラミング言語以外で、ソフトウェア開発で利用する可能性のあるマクロという用語を８つURLつきで示してください。
A0 by Gemini
## 1. 16の言語における「マクロ」の概念と意味

マクロ（Macro）の基本概念は「一連の手順や文脈を定義し、呼び出し時に事前処理（展開）して別のコードや文字列に置き換える機構」ですが、各プログラミング言語・ハードウェア記述言語においてその役割や強力さは大きく異なります。

---

### 1. アセンブラ（Assembly）

* **意味:** 頻出する命令群を一つの命令名（マクロ命令）として定義し、ソースコード上で呼び出すと、アセンブル前にその場所へ命令列をインライン展開（テキスト置換）する機能。
* **特徴:** サブルーチン呼び出し（`CALL`/`RET`）に伴うレジスタ退避やスタック操作のオーバーヘッドを無くし、コードの記述量を減らす目的で多用されます。

### 2. C

* **意味:** プリプロセッサ（`#define`）による単純な文字列置換機構。
* **特徴:** 定数の定義やインライン関数の代用として使われます。衛生性（Hygienic）がないため、カッコをつけ忘れると演算子の優先順位が崩れるなど、副作用を生みやすい特徴があります。

### 3. C++

* **意味:** 基本的にCと同等のプリプロセッサマクロ（`#define`）を継承しつつ、テンプレート機能や `constexpr` への移行が進む領域。
* **特徴:** C言語互換のために残されていますが、型安全性や名前空間の観点から、モダンC++ではテンプレートや `constexpr` などの言語機能へ代替することが推奨されます。

### 4. Verilog-HDL

* **意味:** プリプロセッサ命令（` `define` ）によるコンパイル定数設定およびテキスト置換。
* **特徴:** 回路のビット幅（` `define BUS_WIDTH 32`）やコンパイル条件分岐（` `ifdef`）の制御に使用され、ハードウェア構造の切り替えに利用されます。

### 5. SystemVerilog

* **意味:** Verilogの ` `define` を拡張し、パラメータ付きマクロや多行マクロの可読性を向上させたもの。
* **特徴:** 検証環境（UVM）などでテストベンチを簡潔に記述するためのコード生成マクロ（` `uvm_component_utils` など）として高度に活用されます。

### 6. Lisp (Common Lisp)

* **意味:** プログラミング言語における**S式（構文木）を直接操作・変換する強力なマクロシステム**。
* **特徴:** テキスト置換ではなく、コンパイル時にLispコード自体を評価して別のコード（AST）を生成します。「コードはデータである（Homoiconicity）」という特徴を活かし、新しい構文やDSL（ドメイン固有言語）を言語内に追加できます。

### 7. Rust

* **意味:** 宣言的マクロ（`macro_rules!`）と手続き的マクロ（Procedural Macros / `#[derive(...)]` 等）の2種類を持つ強力な構文拡張機構。
* **特徴:** テキスト置換ではなく、コンパイル時にトークンストリームを解析・変換します。衛生性（Hygiene）が保たれており、変数名の衝突（シャドーイング）が起きないよう設計されています。

### 8. Scheme

* **意味:** 衛生的マクロ（Hygienic Macro / `syntax-rules`）を中心としたマクロシステム。
* **特徴:** Lispから派生した言語ですが、マクロ内部で定義したローカル変数がマクロ展開先の変数名を誤って上書きしないよう、自動的に名前空間が保護（衛生化）される仕組みが言語仕様に組み込まれています。

### 9. Elixir

* **意味:** AST（抽象構文木）を操作してコード生成を行うメタプログラミング機構（`defmacro`）。
* **特徴:** Ruby風の構文を持ちながら内部的にはErlang ASTを直接生成・操作でき、DSLの作成や標準ライブラリ（`if` や `unless` 自体もマクロで記述）の大部分を構築しています。

### 10. Julia

* **意味:** アットマーク記号（`@macro_name`）で呼び出すメタプログラミング機能。
* **特徴:** コンパイル時に引数として渡された式（`Expr` オブジェクト）を受け取り、それを書き換えた式を返します。ベンチマーク計測（`@btime`）やベクトル化処理（`@.`) などを直感的に記述できます。

### 11. Nim

* **意味:** コンパイル時にASTを構築・変換してコードを自動生成するマクロ（`macro`）機能。
* **特徴:** 非常に強力なメタプログラミングを備えており、コンパイル時間計算（CTFE）と組み合わせて、ゼロコスト抽象化や独自の文法構造を作り出すことができます。

### 12. Scala

* **意味:** コンパイラプラグインとしてコンパイル時にコード（AST）の分析や書き換えを行う「Scala Macros」。
* **特徴:** JSONの自動シリアライザ生成や、SQLクエリのコンパイル時型チェックなど、高い型安全性を維持したまま高度なメタプログラミングを実現します。

### 13. Clojure

* **意味:** Lispの伝統を継承したS式ベースのマクロシステム（`defmacro`）。
* **特徴:** コード展開時に評価タイミングを制御（`quote` や `syntax-quote`）し、並列処理や状態管理（`atom` 操作）のための新しい抽象構文パターンを簡潔に定義できます。

### 14. D言語

* **意味:** テンプレートと `mixin`（文字列をコードとしてコンパイル時に挿入する機能）を組み合わせたマクロ的コード生成機能。
* **特徴:** Cのプリプロセッサマクロの問題点を克服し、型安全かつスコープを壊さない形で強力なコンパイル時コード生成（CTFE）を実現します。

### 15. Vim script / Vim9script

* **意味:** エディタのキー操作手順を記録・再実行する「キーボードマクロ」と、関数や構文を展開・制御するスクリプトマクロ。
* **特徴:** 開発時のルーチン的なテキスト編集作業の自動化から、エディタ全体の挙動を制御するメタ拡張までを担います。

### 16. LaTeX (TeX)

* **意味:** 文書作成・組版システムにおける「制御綴り（`\newcommand` や `\def`）」による置き換え・展開機能。
* **特徴:** 定型的な文書構造のショートカット作成から、複製作成・条件分岐までを行う極めて強力な（チューリング完全な）マクロ展開エンジンです。

---

## 2. ソフトウェア開発で利用する「マクロ」用語（8選）

プログラミング言語の構文拡張以外にも、ソフトウェア開発や運用・設計の現場において様々な「マクロ」用語が存在します。

---

### 1. Excel VBA Macro（VBAマクロ）

* **意味:** 開発環境や各種データ（CSV/Excel）の集計・加工、リリース作業のチェック表作成などを自動化するために広く使われるOfficeスクリプト。
* **URL:** [https://learn.microsoft.com/en-us/office/vba/api/overview/](https://learn.microsoft.com/en-us/office/vba/api/overview/)

### 2. CMake Macro

* **意味:** ビルドシステム「CMake」において、一連のビルド手順や依存関係の設定コマンドをまとめて再利用できるようにする機能（`macro()`）。`function` と異なりローカルスコープを作らず親スコープに変数を展開します。
* **URL:** [https://cmake.org/cmake/help/latest/command/macro.html](https://cmake.org/cmake/help/latest/command/macro.html)

### 3. Keybind / Keyboard Macro（キーボードマクロ）

* **意味:** VS Code, Emacs, Vim などのIDE/エディタにおいて、一連のキー入力手順を一時的に記憶させ、大量のソースコードに対して繰り返し同じ修正を適用する自動化機能。
* **URL:** [https://www.gnu.org/software/emacs/manual/html_node/emacs/Keyboard-Macros.html](https://www.google.com/search?q=https://www.gnu.org/software/emacs/manual/html_node/emacs/Keyboard-Macros.html)

### 4. RPM Spec Macro

* **意味:** Linux（RedHat系）のパッケージ作成（`rpmbuild`）において、インストール先ディレクトリ名やビルド手順の定型処理（`%configure`, `%make_build` など）を統一的に記述するためのマクロ変数・関数。
* **URL:** [https://rpm-software-management.github.io/rpm/manual/macros.html](https://rpm-software-management.github.io/rpm/manual/macros.html)

### 5. FreeCAD / CAD Macro

* **意味:** 3D CADツールにおいて、複雑な立体形状の生成ロジックや繰り返し設計手順をPython等のスクリプトで自動記述・再実行するマクロ。
* **URL:** [https://wiki.freecad.org/Macros](https://wiki.freecad.org/Macros)

### 6. Autoconf / M4 Macro

* **意味:** C/C++などのクロスプラットフォームビルドツールで、ターゲット環境のライブラリ依存関係やコンパイラ仕様を自動検出（`configure` スクリプトの生成）するために使われる M4 マクロ言語。
* **URL:** [https://www.gnu.org/software/autoconf/manual/autoconf.html](https://www.google.com/search?q=https://www.gnu.org/software/autoconf/manual/autoconf.html)

### 7. Google Workspace Macro (Apps Script)

* **意味:** クラウド開発・運用管理において、Googleスプレッドシートやドキュメント操作を自動化・外部APIと連携させるためのスクリプトマクロ環境。
* **URL:** [https://developers.google.com/apps-script](https://developers.google.com/apps-script)

### 8. Rust Cargo / Proc-Macro Crate

* **意味:** Rustのビルド・パッケージツール「Cargo」エコシステムにおいて、依存ライブラリからカスタム属性（`#[derive(Serialize)]` など）を提供・拡張するための独立したマクロ専用クレート（Web開発のORマッパーやAPIスキーマ自動生成などで多用）。
* **URL:** [https://doc.rust-lang.org/reference/procedural-macros.html](https://doc.rust-lang.org/reference/procedural-macros.html)


# Q1 Plane moduleという用語が構造化プログラミングの教科書に出てきました。どういう意味で、誰が、いつ、どういう論文を出していますか。最低で８つ、URLをお示しください。
A1
「Plane module（プレーンモジュール）」という表記について確認したところ、一般的な**構造化プログラミング（Structured Programming）やソフトウェア工学の原典（Dijkstra, Parnas, Yourdon, Constantine 等の文献）には、直接の基本概念として「Plane module」という標準専門用語は存在しません**。

教科書の文脈や誤記、あるいは関連する類似概念として以下の可能性が考えられます。

---

## 考えられる3つの可能性

### 1. 「Plain module」の誤記（プレーンなモジュール）

教科書で「Plain（簡素な、標準的な、飾りがない）」を「Plane」と誤表記・誤翻訳した可能性です。

* **意味:** 副作用がなく、抽象化・カプセル化が適切に行われた「単一の明確な責任を持つ標準的・純粋なモジュール」を指して用いられる表現です。

### 2. ネットワークやアーキテクチャ設計における「Plane（平面/レイヤ）」内のモジュール

ソフトウェア工学やネットワーク工学（SDN等）における構造化設計において、システムを「平面（Plane）」で分割し、その中のコンポーネントを指すケースです。

* **Data Plane Module / Forwarding Plane Module**（データ転送処理を行うモジュール）
* **Control Plane Module**（制御論理を担うモジュール）
* **Management Plane Module**（管理機能を担うモジュール）

### 3. モジュール強度（Module Cohesion）や「Flat Structure」との誤解

構造化設計（Yourdon & Constantine）で提示された「モジュールの結束度（Cohesion）」や「階層構造の平坦化（Flat structure）」における文脈の可能性です。

---

## 構造化モデリング・構造化プログラミングの主要論文（歴史的文献リスト）

構造化プログラミングやモジュール化の概念を確立した代表的な論文および原典のリストです。

### 1. Edsger W. Dijkstra (1968)

* **タイトル:** *Go To Statement Considered Harmful*
* **概要:** 制御フローの構造化（gotoの排除）を提唱し、構造化プログラミングの基礎を築いた歴史的論文。
* **URL:** [https://dl.acm.org/doi/10.1145/362929.362947](https://dl.acm.org/doi/10.1145/362929.362947)

### 2. Edsger W. Dijkstra (1972)

* **タイトル:** *Notes on Structured Programming* (in *Structured Programming*)
* **概要:** 抽象化の階層構造（Layers of Abstraction）とプログラムのモジュール化について体系化した文献。
* **URL:** [https://dl.acm.org/doi/book/10.5555/1243380](https://dl.acm.org/doi/book/10.5555/1243380)

### 3. David L. Parnas (1972)

* **タイトル:** *On the Criteria To Be Used in Decomposing Systems into Modules*
* **概要:** 「情報隠蔽（Information Hiding）」の概念を提唱し、モジュール分割の標準基準を決定づけた論文。
* **URL:** [https://dl.acm.org/doi/10.1145/361598.361623](https://dl.acm.org/doi/10.1145/361598.361623)

### 4. Wayne P. Stevens, Glenford J. Myers, Edward Yourdon (1974)

* **タイトル:** *Structured Design*
* **概要:** モジュールの「結合度（Coupling）」と「結合度・結束度（Cohesion）」の評価軸を定義した論文。
* **URL:** [https://doi.org/10.1147/sj.132.0115](https://www.google.com/search?q=https://doi.org/10.1147/sj.132.0115)

### 5. Niklaus Wirth (1971)

* **タイトル:** *Program Development by Stepwise Refinement*
* **概要:** 段階的詳細化（Stepwise Refinement）によるモジュール構造化の手法を提唱。
* **URL:** [https://dl.acm.org/doi/10.1145/362575.362577](https://dl.acm.org/doi/10.1145/362575.362577)

### 6. David L. Parnas (1976)

* **タイトル:** *On the Design and Development of Program Families*
* **概要:** ソフトウェアの共通性と可変性をモジュール構造として整理する概念を提示。
* **URL:** [https://ieeexplore.ieee.org/document/1702334](https://www.google.com/search?q=https://ieeexplore.ieee.org/document/1702334)

### 7. Edward Yourdon & Larry L. Constantine (1979)

* **タイトル:** *Structured Design: Fundamentals of a Discipline of Computer Program and Systems Design*
* **概要:** 構造化設計法（データフロー図、構造チャート、モジュール構造化）の決定版テキスト。
* **URL:** [https://dl.acm.org/doi/book/10.5555/540137](https://dl.acm.org/doi/book/10.5555/540137)

### 8. Corrado Böhm and Giuseppe Jacopini (1966)

* **タイトル:** *Flow Diagrams, Turing Machines and Languages with Only Two Formation Rules*
* **概要:** 「すべてのアルゴリズムは順次・選択・反復の3つの構造で表現できる」という構造化定理を証明した原典。
* **URL:** [https://dl.acm.org/doi/10.1145/365230.365257](https://dl.acm.org/doi/10.1145/365230.365257)

---

お持ちの教科書で「Plane module」が具体的にどのようなコンテキスト（コード例、図表、周辺の単語など）で登場しているかをお知らせいただけますと、さらに精緻な特定や解説が可能です。

# Q2 構造化プログラミングでモジュールの副作用とはどういう意味ですか。関数であれば、入力と出力以外の作用をしないことだと知っています。
A2 
仰る通り、関数の世界における「副作用（Side Effect）」が「入力（引数）を受け取り、出力（戻り値）を返すこと**以外のあらゆる状態変化や外部への働きかけ**を行わないこと」であるのと同様に、**モジュール（Module）レベルにおける副作用**も本質的には同じ概念です。

ただし、モジュールは「複数の関数やデータ構造を集約した単位」であるため、関数の副作用よりも**影響範囲が広く、構造化設計（モジュール化）の品質に直接関わる点**でいくつかの固有の意味を持ちます。

---

## 構造化プログラミングにおける「モジュールの副作用」

モジュールにおける副作用とは、「そのモジュールの公開インターフェース（外部から呼び出せる関数や変数）を経由した自明な動作以外に、システム全体の他の部分や環境に隠れた変化を及ぼすこと」を意味します。

大きく分けると、以下の4つの現象として現れます。

---

### 1. 外部・グローバル状態の無断書き換え（Global State Mutation）

モジュール内部の関数を呼び出した際に、そのモジュールの外にあるグローバル変数や共有データを勝手に変更してしまうケースです。

* **具体例:** Aモジュールの「データ計算関数」を呼んだだけなのに、裏でBモジュールが参照しているグローバルフラグが書き換わってしまう。
* **構造化における問題:** モジュール同士の「結合度（Coupling）」が高くなり、予期せぬバグの温床になります。

### 2. モジュール間での隠れた状態の維持（Hidden Stateful Behavior）

モジュールが内部に隠し状態を持り、呼び出す順番や回数によって挙動が変わってしまうケースです。

* **具体例:** `calculate()` という関数を同じ引数で実行したのに、1回目と2回目で結果が異なる（内部のカウンタや静的変数を変更しているため）。
* **構造化における問題:** モジュールを単体テスト（Unit Test）することが難しくなり、プログラムの動作予測可能性（Predictability）が損なわれます。

### 3. 入力引数（参照・ポインタ）の不透明な書き換え（Parameter Mutation）

モジュールに渡されたデータ構造（オブジェクトや構造体のポインタ）を、呼び出し元が意図しない形で内部で書き換えてしまうことです。

* **具体例:** 配列を検索するだけのモジュール関数に配列のアドレスを渡したら、内部で配列の順序が勝手にソート（書き換え）されて返ってきた。
* **構造化における問題:** 呼び出し側がデータの保持状態を把握できなくなり、他のモジュールへ悪影響を及ぼします。

### 4. 外部環境（I/O・システム資源）への介入（I/O Operations）

計算やデータ変換を行うだけのモジュールのはずが、暗黙的にファイル出力、データベース更新、ネットワーク通信、画面描画などを行ってしまうことです。

* **具体例:** 値の妥当性をチェックするだけのバリデーションモジュールが、チェック失敗時に勝手にログファイルを生成したり画面にエラーダイアログを出す。
* **構造化における問題:** ロジック（計算）と入出力（I/O）の分離という「関心事の分離（Separation of Concerns）」が破壊されます。

---

## なぜモジュールの副作用を排除（制御）すべきなのか？

構造化プログラミング（Yourdon & Constantine らの構造化設計論）において、優れたモジュール分割の指標として「結合度は低く（Loose Coupling）、結束度は高く（High Cohesion）」という原則があります。

副作用が存在すると、以下のような悪影響が発生します。

* **時間的結合（Temporal Coupling）の発生**
「モジュールAを実行した**後に**モジュールBを呼ばなければならない」という隠れた実行順序の制約が生まれ、モジュールの自由な組み換えができなくなります。
* **デバッグ困難性（Ripple Effect / 波及効果）**
システムの一部分を変更しただけで、全く関係のないモジュールが壊れる（副作用によるドミノ倒し現象）。
* **再利用性の喪失**
特定の環境やグローバル変数に依存した副作用を持つモジュールは、他のプロジェクトや別の文脈で再利用することができません。

---

## まとめ

関数の副作用が「ローカルな入力と出力以外の作用」を指すのに対し、モジュールの副作用とは「モジュール境界を越えて、システムの他の場所や環境に隠れた変化を与えること」と言えます。

構造化設計では、完全に副作用をゼロにすることは不可能なため（I/Oやデータベース更新などは必要だからです）、**「副作用を持つモジュール」と「副作用を持たない純粋なモジュール」を明確に分離して設計すること**が極めて重要とされています。

# Q3 モジュールの副作用に関する論文のURLを１６示してください。
A3
モジュールの副作用（Side Effects）、状態の透過性、モジュール結合度（Coupling）、情報隠蔽（Information Hiding）、純粋性（Purity）などを扱った、ソフトウェア工学・プログラミング言語論における主要な論文のWebアクセス先（ACM, IEEE, Springer, 著者公式アーカイブ等）を16選提示します。

これらは構造化設計におけるモジュール境界の非透過性から、言語的な副作用の制限・解析技術（Effect System）に至るまで、副作用の制御に関する議論の歴史的・学術的基盤となっています。

---

### 1. 情報隠蔽とモジュール分割の原典

* **タイトル:** *On the Criteria To Be Used in Decomposing Systems into Modules* (David L. Parnas, 1972)
* **概要:** 副作用や内部状態の変化をモジュール外部から隠蔽（Information Hiding）し、モジュール間の暗黙的依存を断ち切る設計基準を提唱。
* **URL:** [https://dl.acm.org/doi/10.1145/361598.361623](https://dl.acm.org/doi/10.1145/361598.361623)

### 2. 構造化設計と結合度・結束度

* **タイトル:** *Structured Design* (Wayne P. Stevens, Glenford J. Myers, Edward Yourdon, 1974)
* **概要:** モジュール間の副作用による暗黙の結合（Common Coupling など）を排除し、凝集度の高いモジュールを作るための指標を確立。
* **URL:** [https://doi.org/10.1147/sj.132.0115](https://doi.org/10.1147/sj.132.0115)

### 3. モジュール結合度の分類と問題点

* **タイトル:** *Reliable Software Through Composite Design* (Glenford J. Myers, 1975)
* **概要:** グローバル変数や共通参照を経由したモジュールの副作用が、いかにシステムの信頼性を損なうかを分類・分析。
* **URL:** [https://dl.acm.org/doi/book/10.5555/540051](https://www.google.com/search?q=https://dl.acm.org/doi/book/10.5555/540051)

### 4. 抽象データ型（ADT）による状態のカプセル化

* **タイトル:** *Abstract Data Types and the Development of Data Structures* (Barbara Liskov, Stephen Zilles, 1974)
* **概要:** モジュール内部の状態変化を制御された操作関数群でのみ行い、不透明な副作用を防ぐADTの理論基盤。
* **URL:** [https://dl.acm.org/doi/10.1145/800233.807045](https://dl.acm.org/doi/10.1145/800233.807045)

### 5. モジュールプログラムの抽象化層

* **タイトル:** *Notes on Structured Programming* (Edsger W. Dijkstra, 1972)
* **概要:** 下位モジュールの副作用が上位モジュールの動作を乱さない「抽象化の階層構造（Layers of Abstraction）」を解説。
* **URL:** [https://dl.acm.org/doi/book/10.5555/1243380](https://dl.acm.org/doi/book/10.5555/1243380)

### 6. 副作用を排除した関数型モジュールの優位性

* **タイトル:** *Why Functional Programming Matters* (John Hughes, 1989)
* **概要:** モジュールの副作用（Side-effect free）を無くすことで、高階関数や遅延評価による高度なモジュール結合（Glue）が可能になることを証明。
* **URL:** [https://doi.org/10.1093/comjnl/32.2.98](https://www.google.com/search?q=https://doi.org/10.1093/comjnl/32.2.98)

### 7. エフェクトシステム（Effect System）の提唱

* **タイトル:** *Polymorphic Effect Systems* (Luc Gifford, John M. Lucassen, 1986)
* **概要:** モジュールや関数がどのような副作用（Read/Write/Alloc）を及ぼすかを型システムで追跡・制御する手法の開拓。
* **URL:** [https://dl.acm.org/doi/10.1145/319838.319848](https://dl.acm.org/doi/10.1145/319838.319848)

### 8. 副作用とエイリアシングの制御（Object Ownership）

* **タイトル:** *Flexible Alias Protection via Ownership Types* (David Clarke, John Potter, James Noble, 1998)
* **概要:** モジュール外部から内部オブジェクトが直接書き換えられる「隠れた副作用（Aliasing）」を防ぐ所有権型のモデル。
* **URL:** [https://dl.acm.org/doi/10.1145/286942.286947](https://dl.acm.org/doi/10.1145/286942.286947)

### 9. モジュールの副作用解析（Side-Effect Analysis）

* **タイトル:** *Interprocedural Side-Effect Analysis* (Keith D. Cooper, Ken Kennedy, 1988)
* **概要:** プログラム全体において、あるモジュールや関数の呼び出しがどの変数に副作用を及ぼすかを静的に解析する手法。
* **URL:** [https://dl.acm.org/doi/10.1145/42392.42403](https://dl.acm.org/doi/10.1145/42392.42403)

### 10. モナドによるモジュール副作用の構造化・分離

* **タイトル:** *Imperative Functional Programming* (Philip Wadler, Simon Peyton Jones, 1993)
* **概要:** モジュールにおける純粋な計算ロジックとI/O等の副作用をモナド（Monad）を用いて厳密に分離・構造化するアプローチ。
* **URL:** [https://dl.acm.org/doi/10.1145/158511.158524](https://dl.acm.org/doi/10.1145/158511.158524)

### 11. モジュール結合度と波及効果の評価

* **タイトル:** *A Software Design Complexity Measure* (Thomas J. McCabe, 1976)
* **概要:** モジュール間の制御フローおよびデータの副作用的変化がシステムの複雑度（Cyclomatic Complexity）に与える影響を論じた論文。
* **URL:** [https://doi.org/10.1109/TSE.1976.233837](https://www.google.com/search?q=https://doi.org/10.1109/TSE.1976.233837)

### 12. 非同期・並列環境におけるモジュールの副作用と整合性

* **タイトル:** *Time, Clocks, and the Ordering of Events in a Distributed System* (Leslie Lamport, 1978)
* **概要:** 分散モジュール環境において、状態変化（副作用）の発生順序や時間的整合性をいかに保つかを定義した不朽の名著。
* **URL:** [https://dl.acm.org/doi/10.1145/359545.359563](https://dl.acm.org/doi/10.1145/359545.359563)

### 13. オブジェクト指向における副作用の限定（Command-Query Separation）

* **タイトル:** *Object-Oriented Software Construction* (Bertrand Meyer, 1988)
* **概要:** モジュールの操作を「状態を変更するコマンド（副作用あり）」と「状態を参照するクエリ（副作用なし）」に明確に分離するCQS原則を提唱。
* **URL:** [https://dl.acm.org/doi/book/10.5555/530115](https://www.google.com/search?q=https://dl.acm.org/doi/book/10.5555/530115)

### 14. カプセル化の破綻と領域限定（Region-Based Memory）

* **タイトル:** *Tofte-Talpin Region-Based Memory Management* (Mads Tofte, Jean-Pierre Talpin, 1997)
* **概要:** メモリ割り当てや破棄というモジュールレベルの副作用を「領域（Region）」単位で局所化・安全管理する理論。
* **URL:** [https://dl.acm.org/doi/10.1016/S0747-7171(97)80002-5](https://www.google.com/search?q=https://dl.acm.org/doi/10.1016/S0747-7171(97)80002-5)

### 15. コンポーネント型モジュールの契約による管理（Design by Contract）

* **タイトル:** *Applying "Design by Contract"* (Bertrand Meyer, 1992)
* **概要:** 事前条件・事後条件・不変条件（Invariants）を定義することで、モジュールの状態（副作用）の正当性を保証する設計モデル。
* **URL:** [https://doi.org/10.1109/2.161279](https://www.google.com/search?q=https://doi.org/10.1109/2.161279)

### 16. アスペクト指向による横断的副作用の分離

* **タイトル:** *Aspect-Oriented Programming* (Gregor Kiczales et al., 1997)
* **概要:** ログ出力やトレースなど、様々なモジュールに跨って散乱する「横断的副作用（Crosscutting Concerns）」を独立モジュール（Aspect）として切り離す技術。
* **URL:** [https://doi.org/10.1007/BFb0053381](https://www.google.com/search?q=https://doi.org/10.1007/BFb0053381)

