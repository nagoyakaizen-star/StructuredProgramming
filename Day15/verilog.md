# Q1 
A1 by gemini
Verilog HDLのコードをシミュレーション・動作確認するためのツール（Webブラウザで動くもの、Windowsアプリ）はいくつか存在します。

学習用途や手軽さ、本格的な開発など、目的に応じて選ぶことができます。

---

### 1. Webブラウザで動くツール（インストール不要・手軽）

環境構築なしですぐにコードを試したい場合に便利です。

* **EDA Playground** (おすすめ)
* **概要**: ブラウザ上で利用できる標準的なHDLシミュレーション環境です。
* **特徴**: Icarus Verilog などの定番シミュレータを選択でき、`$dumpfile` / `$dumpvars` を使った波形表示（EPWave）にも対応しています。
* **利用方法**: 無料のアカウント登録（Googleアカウント等）ですぐに使用できます。


* **DigitalJS Online**
* **概要**: Verilogコードを合成し、**論理回路図（デジタル回路図）として可視化しながらシミュレーション**できるWebツールです。
* **特徴**: 回路ブロック（FFやゲート）がビジュアルで表示され、信号値の変化を視覚的に追えるため、今回のような**CPUの動作学習やデバッグに有用**です。



---

### 2. Windowsで動く無料アプリ（本格的・高速）

ローカル環境で本格的にテストベンチを回し、波形観察を行う際におすすめの組み合わせです。

* **Icarus Verilog (iverilog) + GTKWave** (おすすめ)
* **概要**: オープンソースの定番Verilogシミュレータ（Icarus Verilog）と、波形表示アプリ（GTKWave）のセットです。
* **特徴**: 軽量かつ動作が非常に高速です。Windows用のインストーラ（`iverilog-v12-x64_setup.exe` など）を入れるだけで、コマンドラインから簡単にシミュレーション実行と波形描画が行えます。


* **Vivado ML Standard Edition** (Xilinx / AMD)
* **概要**: FPGA開発で用いられるプロ仕様の開発環境です（無料版あり）。
* **特徴**: 実際のFPGA向け論理合成や高度なシミュレーションを行えます。ファイルサイズが数十GBと巨大なため、最初は軽量な Icarus Verilog または EDA Playground から試すのがスムーズです。



---

### 3. VS Code（エディタ）との組み合わせ

Windows上で作業する場合、テキストエディタに **VS Code** を使用し、拡張機能の **Verilog-HDL / SystemVerilog** や **WaveTrace**（波形表示機能）を導入すると、コード記述から波形確認まで快適に行えます。

# Q2 EDA Playgroundを使って、ブラウザ上で1bit CPUのVerilogコードを実行・テストベンチで波形表示する具体的な使い方を教えてください。
A2
EDA Playground（[edaplayground.com](https://www.edaplayground.com)）を使えば、ソフトを一切インストールせずにブラウザ上だけで Verilog HDL のシミュレーションを実行し、波形（ウェーブフォーム）を確認できます。

先ほど作成した **「3レジスタ版 1-bit CPU」** を例に、登録から波形を表示するまでの具体的手順を解説します。

---

## 全体手順（5ステップ）

### STEP 1: 無料アカウント登録

1. [edaplayground.com](https://www.edaplayground.com) にアクセスします。
2. 画面右上の **「Log in」** をクリックし、Google アカウントや GitHub アカウントでサインイン（初回登録）を行います。

---

### STEP 2: 画面設定（左パネルの設定）

画面左側のサイドバーパネル（Options）で、次のように設定します。

| 設定項目 | 選択値 | 説明 |
| --- | --- | --- |
| **Language & Library** | **SystemVerilog/Verilog** | 言語の選択 |
| **Tools & Simulators** | **Icarus Verilog 12.0** (または最新版) | 使用するシミュレータエンジン |
| **Open EPWave after run** | **チェックを入れる (✓)** | 実行完了時に**波形ウィンドウを自動表示** |

---

### STEP 3: ソースコードの貼り付け

画面中央は「左画面（テストベンチ）」と「右画面（設計本体）」に分かれています。

#### ① 右画面（`design.sv` または `design.v`）

CPU本体のコードを貼り付けます。

```verilog
// design.sv
module cpu_1bit_3reg (
    input  wire clk,
    input  wire rst_n,
    input  wire in_data,
    output reg  out_data,
    output reg  pc,
    output reg  reg_a,
    output reg  reg_b,
    output reg  reg_c,
    output wire [2:0] current_state
);

    localparam S_FETCH  = 3'b000;
    localparam S_DECODE = 3'b001;
    localparam S_EXEC   = 3'b010;
    localparam S_RSHIFT = 3'b011;
    localparam S_UPDATE = 3'b100;

    reg [2:0] state;
    assign current_state = state;

    reg [1:0] ir;
    reg       flag_c;

    localparam OP_NAND   = 2'b00;
    localparam OP_RSHIFT = 2'b01;
    localparam OP_IN     = 2'b10;
    localparam OP_OUT    = 2'b11;

    reg [1:0] rom [0:1];
    initial begin
        rom[0] = OP_RSHIFT; // シフト命令
        rom[1] = OP_NAND;   // NAND命令
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state    <= S_FETCH;
            pc       <= 1'b0;
            reg_a    <= 1'b1;
            reg_b    <= 1'b0;
            reg_c    <= 1'b1;
            ir       <= 2'b00;
            out_data <= 1'b0;
            flag_c   <= 1'b0;
        end else begin
            case (state)
                S_FETCH: begin
                    ir    <= rom[pc];
                    state <= S_DECODE;
                end
                S_DECODE: begin
                    if (ir == OP_RSHIFT) state <= S_RSHIFT;
                    else                state <= S_EXEC;
                end
                S_RSHIFT: begin
                    flag_c <= reg_c;
                    reg_c  <= reg_b;
                    reg_b  <= reg_a;
                    reg_a  <= in_data;
                    state  <= S_UPDATE;
                end
                S_EXEC: begin
                    case (ir)
                        OP_NAND: reg_a    <= ~(reg_a & reg_b);
                        OP_IN:   reg_c    <= in_data;
                        OP_OUT:  out_data <= reg_a;
                        default: ;
                    endcase
                    state <= S_UPDATE;
                end
                S_UPDATE: begin
                    pc    <= ~pc;
                    state <= S_FETCH;
                end
                default: state <= S_FETCH;
            endcase
        end
    end
endmodule

```

#### ② 左画面（`testbench.sv` または `tb.v`）

クロックを生成し、波形ファイル（`.vcd`）を出力させるテストベンチコードを貼り付けます。

> **重要ポイント:** `$dumpfile("dump.vcd");` と `$dumpvars(0, tb_cpu_1bit_3reg);` を記述しておくことで、波形ビューア（EPWave）に信号データが引き渡されます。

```verilog
// testbench.sv
module tb_cpu_1bit_3reg;
    reg clk;
    reg rst_n;
    reg in_data;
    wire out_data;
    wire pc;
    wire reg_a, reg_b, reg_c;
    wire [2:0] current_state;

    // CPUモジュールのインスタンス化
    cpu_1bit_3reg uut (
        .clk(clk),
        .rst_n(rst_n),
        .in_data(in_data),
        .out_data(out_data),
        .pc(pc),
        .reg_a(reg_a),
        .reg_b(reg_b),
        .reg_c(reg_c),
        .current_state(current_state)
    );

    // 10ns周期のクロック生成 (5nsごとにトグル)
    always #5 clk = ~clk;

    initial begin
        // 波形出力ファイルの設定 (EPWave表示に必須)
        $dumpfile("dump.vcd");
        $dumpvars(0, tb_cpu_1bit_3reg);

        // 初期信号の設定
        clk = 0;
        rst_n = 0;
        in_data = 1'b1; // シフトイン用の入力値

        // リセット解除
        #15 rst_n = 1;

        // クロックを巡回させて動作観察 (200ns間シミュレーション)
        #200;
        
        $finish;
    end
endmodule

```

---

### STEP 4: 実行（Run）

1. 画面左上の **「Save」** ボタンで一旦保存します。
2. **「Run」** ボタンをクリックします。

---

### STEP 5: 波形の確認（EPWave）

実行が成功すると、別タブで波形表示ツール **「EPWave」** が自動的に立ち上がります。

* **信号の動き:** `clk` の立ち上がりごとに `current_state`（`0 -> 1 -> 3 -> 4 -> 0...`）が変化していく様子が観察できます。
* **シフト動作:** `S_RSHIFT`（ステート 3）のタイミングで、`in_data` が `reg_a` に入り、`reg_a` の値が `reg_b` へ、`reg_b` の値が `reg_c` へ押し出される1ビットシフトの挙動を追うことができます。
