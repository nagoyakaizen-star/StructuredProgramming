# Q1 データ結合、構造体結合、バンドリング結合、制御結合、ハイブリッド結合、共有結合、内容結合を、それぞれC、C＋＋、Python、Rustのソースコードで利点、欠点がわかる例を作成してください。
A1 
モジュール結合度（Coupling）は、ソフトウェア設計において「弱い（結合度が低い＝良い設計）」から「強い（結合度が高い＝保守が困難）」の順に評価されます。

ご提示いただいた7つの結合度（データ、構造体/スタンプ、バンドリング、制御、ハイブリッド、共有/共通、内容/内部）について、それぞれの性質と、言語（C, C++, Python, Rust）による表現の違い・安全性の担保方法がわかるコード例とともに解説します。

---

## 結合度の概要一覧

| 結合度の種類 | 強さ | 概要 | 主な利点・欠点 |
| --- | --- | --- | --- |
| **1. データ結合** | 弱（良） | 単一の値（Int, String等）のみを渡す | **利点:** 依存が最小限で再利用性が極めて高い<br>

<br>**欠点:** 引数が多くなりやすい |
| **2. 構造体結合** | ↓ | データ構造（Struct/Class）ごと渡すが、一部しか使わない | **利点:** 引数をひとまとめにできる<br>

<br>**欠点:** 不要なフィールドへの依存が発生する |
| **3. バンドリング結合** | ↓ | 複数の処理やデータをまとめた「モジュール」を丸ごと依存させる | **利点:** モジュール単位で機能を集約できる<br>

<br>**欠点:** モジュール変更の影響範囲が広くなる |
| **4. 制御結合** | ↓ | フラグや制御コードを渡して相手の挙動（処理フロー）を分岐させる | **利点:** 呼び出し側から挙動を制御できる<br>

<br>**欠点:** 処理内容がカプセル化されず密結合になる |
| **5. ハイブリッド結合** | ↓ | 構造体の中に「制御用フラグ」が含まれており、相手の挙動を変える | **利点:** データと制御を同時に渡せる<br>

<br>**欠点:** データの受け渡しと制御の混同により設計が複雑化する |
| **6. 共有結合** | ↓ | グローバル変数や共有メモリ（静的領域）を複数モジュールで読み書きする | **利点:** パラメータ渡しのオーバーヘッドがない<br>

<br>**欠点:** どこで書き換わったか追尾が難しく、バグの原因に |
| **7. 内容結合** | 強（悪） | 他モジュールの内部構造やメモリを直接参照・書き換え（ジャンプ等）する | **利点:** 超低レイヤーでの極限の最適化<br>

<br>**欠点:** カプセル化の完全破壊。修正時に即座に破損する |

---

## コード例（各言語での表現と特徴）

### 1. データ結合 (Data Coupling)

**言語: C言語**
必要な基本型データ（単一の値）のみを引数として渡します。

```c
// [利点] モジュールが独立しており、再利用や単体テストが非常に容易
// [欠点] 渡すデータが増えると引数リストが長くなる
double calculate_tax(double price, double tax_rate) {
    return price * tax_rate;
}

```

---

### 2. 構造体結合 / スタンプ結合 (Stamp Coupling)

**言語: Rust**
データ構造体全体を渡しますが、受け取り側はその一部のプロパティしか利用しません。

```rust
pub struct UserProfile {
    pub id: u64,
    pub name: String,
    pub email: String,
    pub age: u8,
}

// [利点] 引数が `&UserProfile` 1個ですみ、追加データが必要になってもシグネチャ変更不要
// [欠点] `send_email` は `email` しか使わないのに `age` や `id` の変更影響を受ける
fn send_welcome_email(user: &UserProfile) {
    println!("Sending email to: {}", user.email);
}

```

---

### 3. バンドリング結合 (Bundling Coupling)

**言語: C++**
機能群を1つのオブジェクトやクラスに統合してモジュールごと渡す状態です。

```cpp
#include <iostream>
#include <string>

class Logger {
public:
    void log_info(const std::string& msg) { std::cout << "[INFO] " << msg << "\n"; }
    void log_error(const std::string& msg) { std::cerr << "[ERROR] " << msg << "\n"; }
};

class PaymentProcessor {
    Logger& logger; // Loggerモジュール丸ごとに依存
public:
    PaymentProcessor(Logger& log) : logger(log) {}
    
    void process() {
        // [利点] Loggerの持つ複数のメソッドを統一して利用可能
        // [欠点] Loggerの変更やインターフェース修正がPaymentProcessor全体に影響する
        logger.log_info("Payment processed.");
    }
};

```

---

### 4. 制御結合 (Control Coupling)

**言語: Python**
呼び出し側が `is_admin` などのフラグを渡し、関数内部の実行フロー（分岐）を直接指示します。

```python
# [利点] 1つの関数で複数のモードを切り替えて処理できる
# [欠点] 呼び出し側が内部ロジックを知っている必要があり、条件分岐が増えて複雑化する
def process_user_data(data: dict, is_admin: bool):
    if is_admin:
        # 管理者専用処理
        print(f"Admin processing: {data}")
    else:
        # 一般ユーザー処理
        print(f"Standard processing: {data}")

# ポリモーフィズム（多態性）や関数オブジェクト渡しにリファクタリングすることで改善可能

```

---

### 5. ハイブリッド結合 (Hybrid Coupling)

**言語: C++**
構造体データの中に「処理制御用フラグ（コマンド）」を潜ませて渡します。

```cpp
enum class Command { CREATE, UPDATE, DELETE };

struct UserRequest {
    Command cmd; // 制御フラグ
    int user_id;
    std::string name;
};

// [利点] リクエストデータと処理種別を1つのパケットとして送受信できる（API等でよくある形式）
// [欠点] データ構造と制御構造が密結合し、Commandの変更がデータ処理全体に波及する
void handle_request(const UserRequest& req) {
    switch (req.cmd) {
        case Command::CREATE: /* ... */ break;
        case Command::UPDATE: /* ... */ break;
        case Command::DELETE: /* ... */ break;
    }
}

```

---

### 6. 共有結合 / 共通結合 (Common Coupling)

**言語: Python**
複数の関数やモジュールがグローバル空間の変数を直接参照・変更します。

```python
# グローバル共有領域
config_state = {"theme": "light", "max_connections": 10}

def update_theme(new_theme: str):
    # [利点] 関数の引数に渡す手間なく、どこからでもアクセスできる
    # [欠点] 誰がいつ `config_state` を変更したか追跡が不可能な副作用バグが発生しやすい
    global config_state
    config_state["theme"] = new_theme

def render_ui():
    print(f"Rendering with theme: {config_state['theme']}")

```

---

### 7. 内容結合 / 内部結合 (Content Coupling)

**言語: C言語 vs Rust**
他方のモジュールの内部メモリや非公開データ領域へ直接割り込んで操作する最も危険な結合度です。

#### 【C言語の例】ポインタ計算で非公開メモリ領域を書き換える

```c
#include <stdio.h>

typedef struct {
    int public_id;
    int private_secret; // 外部からは隠蔽したいデータ
} InternalData;

void malicious_or_hacky_func(InternalData* data) {
    // [利点] 極限の低レイヤー処理やデバッグ時にカプセル化を強行突破できる
    // [欠点] 構造体のフィールド順序が変わっただけでプログラムが崩壊する（カプセル化の破壊）
    int* ptr = (int*)data;
    *(ptr + 1) = 999; // private_secret 領域を直接書き換えてしまう
}

```

#### 【Rustの安全対策】安全性の保証

Rustでは安全なコード（Safe Rust）を書く限り、所有権とカプセル化ルールによって**内容結合の発生をコンパイル段階で原理的に遮断**します。

```rust
mod internal {
    pub struct SecureData {
        pub public_id: u64,
        secret: u64, // 非公開（private）フィールド
    }

    impl SecureData {
        pub fn new(id: u64, secret: u64) -> Self {
            Self { public_id: id, secret }
        }
    }
}

fn attempt_access() {
    let data = internal::SecureData::new(1, 42);
    
    // println!("{}", data.secret); 
    // ↑ コンパイルエラー: field `secret` of struct `SecureData` is private
    // Safe Rustでは内容結合（隠蔽領域への直接アクセス）が言語仕様として不可能
}

```

---

## 設計時の考え方

1. **基本は「データ結合」を目指す:** 引数は必要な最小限のデータ（値型やイミュータブル参照）のみを渡すように設計します。
2. **制御結合・ハイブリッド結合を避ける:** 「フラグを渡して処理を分ける」のではなく、関数自体を分ける（インターフェース分離や高階関数・クロージャの活用）ことで疎結合を実現できます。
3. **共有結合・内容結合は排除する:** グローバル変数や内部メモリ操作は、マルチスレッドでのバグ（データ競合）や保守性の悪化を招くため、カプセル化を徹底します。

# Q2 それぞれの結合ごとに４種類の言語で表現してください。
A2
 7種類のモジュール結合度（データ、構造体、バンドリング、制御、ハイブリッド、共有、内容）について、**すべての結合度ごとにC、C++、Python、Rustの4言語での実装例**をまとめました。

言語による仕様の違い（カプセル化機能や安全性の制限など）も比較しながら確認してみてください。

---

## 1. データ結合 (Data Coupling)

単一の基本型データ（値）のみをやり取りする、最も望ましい結合度です。

### C言語

```c
// 必要な値（単一の数値）のみ渡す
double calc_tax_c(double price, double rate) {
    return price * rate;
}

```

### C++

```cpp
// 基本型を値渡し（または参照渡し）
double calc_tax_cpp(double price, double rate) {
    return price * rate;
}

```

### Python

```python
# 渡すのは数値型などの不可変な値のみ
def calc_tax_py(price: float, rate: float) -> float:
    return price * rate

```

### Rust

```rust
// 影響範囲が引数のみに閉じた安全な関数
fn calc_tax_rs(price: f64, rate: f64) -> f64 {
    price * rate
}

```

---

## 2. 構造体結合 / スタンプ結合 (Stamp Coupling)

構造体やオブジェクトをまるごと渡しますが、受け取り側はその一部のデータしか使用しない状態です。

### C言語

```c
typedef struct { int id; char name[50]; double balance; } AccountC;

// balance（残高）しか使わないのに構造体全体を受け取る
void print_balance_c(const AccountC *acc) {
    printf("Balance: %.2f\n", acc->balance);
}

```

### C++

```cpp
struct AccountCpp { int id; std::string name; double balance; };

// 残高の確認しかしないが構造体全体に依存する
void print_balance_cpp(const AccountCpp& acc) {
    std::cout << "Balance: " << acc.balance << "\n";
}

```

### Python

```python
class AccountPy:
    def __init__(self, acc_id: int, name: str, balance: float):
        self.id = acc_id
        self.name = name
        self.balance = balance

# dict や オブジェクトを受け取るが内部で一部のプロパティしか参照しない
def print_balance_py(acc: AccountPy):
    print(f"Balance: {acc.balance}")

```

### Rust

```rust
struct AccountRs { id: u64, name: String, balance: f64 }

// `name` や `id` が変更されても影響を受ける構成
fn print_balance_rs(acc: &AccountRs) {
    println!("Balance: {}", acc.balance);
}

```

---

## 3. バンドリング結合 (Bundling Coupling)

特定の処理群をまとめた「モジュール全体」を依存関係として渡す状態です。

### C言語

```c
// ログ出力関数のポインタ群を保持するモジュール依存構造
typedef struct {
    void (*info)(const char*);
    void (*error)(const char*);
} LoggerC;

void process_data_c(LoggerC *logger) {
    logger->info("Data processing started."); // Logger機能群に依存
}

```

### C++

```cpp
#include <iostream>

class LoggerCpp {
public:
    void info(const std::string& msg) { std::cout << "[INFO] " << msg << "\n"; }
    void error(const std::string& msg) { std::cerr << "[ERROR] " << msg << "\n"; }
};

class ProcessorCpp {
    LoggerCpp& logger; // モジュールを丸ごと保持して依存
public:
    ProcessorCpp(LoggerCpp& log) : logger(log) {}
    void run() { logger.info("Running..."); }
};

```

### Python

```python
class LoggerPy:
    def info(self, msg: str): print(f"[INFO] {msg}")
    def error(self, msg: str): print(f"[ERROR] {msg}")

# モジュール/インスタンス丸ごとを引数で渡す
def process_data_py(logger: LoggerPy):
    logger.info("Processing...")

```

### Rust

```rust
struct LoggerRs;
impl LoggerRs {
    fn info(&self, msg: &str) { println!("[INFO] {}", msg); }
}

struct ProcessorRs<'a> {
    logger: &'a LoggerRs, // Loggerコンポーネント全体へ依存
}
impl<'a> ProcessorRs<'a> {
    fn run(&self) { self.logger.info("Running..."); }
}

```

---

## 4. 制御結合 (Control Coupling)

呼び出し側が「フラグ（制御情報）」を渡し、呼び出される側の内部処理フロー（条件分岐）を制御する状態です。

### C言語

```c
// is_admin フラグによって内部の処理分岐を切り替える
void process_user_c(int user_id, int is_admin) {
    if (is_admin) {
        // 管理者用の特権処理
    } else {
        // 一般ユーザーの処理
    }
}

```

### C++

```cpp
enum class UserRole { Admin, Standard };

// 制御パラメータ（UserRole）を渡して内部で条件分岐
void process_user_cpp(int user_id, UserRole role) {
    if (role == UserRole::Admin) {
        // 管理者処理
    } else {
        // 一般処理
    }
}

```

### Python

```python
# ブール値フラグで相手側の関数内の動作を直接指示する
def process_user_py(user_id: int, is_admin: bool = False):
    if is_admin:
        print("Executing privileged task...")
    else:
        print("Executing standard task...")

```

### Rust

```rust
enum Mode { Admin, User }

// 実行モジュール内部の制御権を呼び出し側が掌握してしまう
fn process_user_rs(user_id: u64, mode: Mode) {
    match mode {
        Mode::Admin => println!("Admin logic"),
        Mode::User => println!("Standard logic"),
    }
}

```

---

## 5. ハイブリッド結合 (Hybrid Coupling)

「データ」と「制御用フラグ」が同じ構造体・通信パケット等に混在している状態です。

### C言語

```c
typedef struct {
    int cmd; // 1: 登録, 2: 削除（制御フラグ）
    int user_id;
    char name[30];
} CommandPacketC;

void handle_packet_c(CommandPacketC pkt) {
    if (pkt.cmd == 1) /* 登録処理 */;
    else if (pkt.cmd == 2) /* 削除処理 */;
}

```

### C++

```cpp
struct UserCommandCpp {
    std::string action; // "CREATE", "UPDATE", "DELETE"
    int user_id;
    std::string payload;
};

void handle_command_cpp(const UserCommandCpp& cmd) {
    if (cmd.action == "CREATE") { /* ... */ }
    else if (cmd.action == "DELETE") { /* ... */ }
}

```

### Python

```python
# 辞書内に制御コマンド(action)とデータ(data)が混在
def handle_request_py(request: dict):
    action = request.get("action")
    data = request.get("payload")
    
    if action == "SAVE":
        print(f"Saving {data}")
    elif action == "PURGE":
        print(f"Purging {data}")

```

### Rust

```rust
struct RequestPacketRs {
    command_code: u8, // 制御命令コードとデータが同じ構造体の中に存在する
    payload: String,
}

fn handle_request_rs(req: RequestPacketRs) {
    match req.command_code {
        0x01 => println!("Process: {}", req.payload),
        0xFF => println!("Reset system"),
        _ => {},
    }
}

```

---

## 6. 共有結合 / 共通結合 (Common Coupling)

グローバル変数や共有データ領域を複数モジュールが読み書きする状態です。

### C言語

```c
// グローバル変数（共有領域）
int g_system_state = 0;

void module_a_c() { g_system_state = 1; }
void module_b_c() { if (g_system_state == 1) { /* 処理 */ } }

```

### C++

```cpp
// 静的/グローバル変数への直接依存
static int g_config_flags = 0;

void update_config_cpp(int flag) { g_config_flags |= flag; }
void apply_config_cpp() { if (g_config_flags & 0x01) { /* 適用 */ } }

```

### Python

```python
# モジュール単位のグローバル変数を共有して書き換える
shared_config = {"debug_mode": False}

def enable_debug_py():
    global shared_config
    shared_config["debug_mode"] = True

def run_app_py():
    if shared_config["debug_mode"]:
        print("Debug output...")

```

### Rust

```rust
// Rustで共有可変状態を作る場合は `unsafe` または排他制御（Mutex等）が必要になる
static mut GLOBAL_STATE: i32 = 0;

fn update_state_rs() {
    unsafe { GLOBAL_STATE = 10; } // データの競合リスクが高く非推奨
}
fn read_state_rs() {
    unsafe { println!("State: {}", GLOBAL_STATE); }
}

```

---

## 7. 内容結合 / 内部結合 (Content Coupling)

別モジュールのカプセル化を破壊し、内部メモリや非公開（private）メンバーへ直接介入する最も危険な状態です。

### C言語

ポインタ計算を利用して外部から構造体のプライベート（意図した隠蔽領域）を強行突破して書き換えます。

```c
typedef struct {
    int public_val;
    int internal_secret; // 非公開にしたいメンバー
} InternalDataC;

void hack_content_c(InternalDataC* data) {
    // メモリのオフセットを計算して直接内部変数を変更
    int *secret_ptr = (int*)data + 1;
    *secret_ptr = 9999; // 内容結合（非公開領域の直接破壊）
}

```

### C++

フレンド指定（`friend`）やキャスト操作でプライベート領域を強引に操作します。

```cpp
class SecretStoreCpp {
private:
    int secret_key = 1234;
    friend void malicious_hacker(SecretStoreCpp& store); // friend権限でのアクセス
};

void malicious_hacker(SecretStoreCpp& store) {
    store.secret_key = 0; // privateメンバーを外部関数から直接書き換え
}

```

### Python

Pythonには厳密なprivateがなく、慣習的なアンスコ2つ（`__member`）の名前修飾（Name Mangling）も簡単にバイパスして内部書き換えが可能です。

```python
class SecretStorePy:
    def __init__(self):
        self.__secret_key = 42 # 意図的に非公開にしようとした変数

store = SecretStorePy()
# Pythonの内部名前修飾ルールを突いて外部から書き換える（内容結合）
store._SecretStorePy__secret_key = 999 

```

### Rust

**【言語仕様による阻止】**
Safe Rustではカプセル化が強制されるためコンパイルエラーになりますが、`unsafe`と生ポインタ（Raw Pointer）を使えば他言語と同様に危険な結合が再現可能です。

```rust
mod private_module {
    pub struct SecretStoreRs {
        pub public_field: u32,
        secret_field: u32, // プライベートフィールド
    }
    impl SecretStoreRs {
        pub fn new() -> Self { Self { public_field: 1, secret_field: 100 } }
    }
}

// unsafeを使った内容結合の再現（Safe Rustでは実行不可能）
fn hack_content_rs(store: &mut private_module::SecretStoreRs) {
    let ptr = store as *mut _ as *mut u32;
    unsafe {
        *ptr.offset(1) = 999; // メモリを直接指してプライベート領域を強制上書き
    }
}

```
