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

# Q3 それぞれのソースコードを言語ごとに一つのファイルにまとめて、コンパイルまたは実行できるものにしてください。
A3 
```python
import os

# C Language Code
c_code = """#include <stdio.h>
#include <string.h>

// --- 1. Data Coupling ---
double calc_tax_c(double price, double rate) {
    return price * rate;
}

// --- 2. Stamp Coupling ---
typedef struct {
    int id;
    char name[50];
    double balance;
} AccountC;

void print_balance_c(const AccountC *acc) {
    printf("[2. Stamp Coupling] Balance: %.2f\\n", acc->balance);
}

// --- 3. Bundling Coupling ---
typedef struct {
    void (*info)(const char*);
    void (*error)(const char*);
} LoggerC;

void log_info_impl(const char* msg) { printf("[3. Bundling Coupling - INFO] %s\\n", msg); }
void log_error_impl(const char* msg) { printf("[3. Bundling Coupling - ERROR] %s\\n", msg); }

void process_data_c(LoggerC *logger) {
    logger->info("Data processing started.");
}

// --- 4. Control Coupling ---
void process_user_c(int user_id, int is_admin) {
    if (is_admin) {
        printf("[4. Control Coupling] Admin privileges granted for user %d\\n", user_id);
    } else {
        printf("[4. Control Coupling] Standard access for user %d\\n", user_id);
    }
}

// --- 5. Hybrid Coupling ---
typedef struct {
    int cmd; // 1: CREATE, 2: DELETE
    int user_id;
    char name[30];
} CommandPacketC;

void handle_packet_c(CommandPacketC pkt) {
    if (pkt.cmd == 1) {
        printf("[5. Hybrid Coupling] Action CREATE for %s (ID: %d)\\n", pkt.name, pkt.user_id);
    } else if (pkt.cmd == 2) {
        printf("[5. Hybrid Coupling] Action DELETE for ID: %d\\n", pkt.user_id);
    }
}

// --- 6. Common Coupling ---
int g_system_state = 0;

void module_a_c() {
    g_system_state = 1;
    printf("[6. Common Coupling] Module A updated g_system_state to %d\\n", g_system_state);
}

void module_b_c() {
    if (g_system_state == 1) {
        printf("[6. Common Coupling] Module B detected g_system_state == 1\\n");
    }
}

// --- 7. Content Coupling ---
typedef struct {
    int public_val;
    int internal_secret;
} InternalDataC;

void hack_content_c(InternalDataC* data) {
    int *secret_ptr = (int*)data + 1;
    *secret_ptr = 9999; // Direct memory overwrite of private member
    printf("[7. Content Coupling] Internal secret forcefully altered to %d\\n", data->internal_secret);
}

int main() {
    printf("=== C Coupling Examples ===\\n\\n");

    // 1. Data Coupling
    double tax = calc_tax_c(1000.0, 0.10);
    printf("[1. Data Coupling] Tax: %.2f\\n", tax);

    // 2. Stamp Coupling
    AccountC acc = {101, "Alice", 2500.50};
    print_balance_c(&acc);

    // 3. Bundling Coupling
    LoggerC logger = { log_info_impl, log_error_impl };
    process_data_c(&logger);

    // 4. Control Coupling
    process_user_c(42, 1);

    // 5. Hybrid Coupling
    CommandPacketC pkt = {1, 42, "Bob"};
    handle_packet_c(pkt);

    // 6. Common Coupling
    module_a_c();
    module_b_c();

    // 7. Content Coupling
    InternalDataC internal_data = {10, 42};
    hack_content_c(&internal_data);

    return 0;
}
"""

with open("coupling_examples.c", "w") as f:
    f.write(c_code)

# C++ Language Code
cpp_code = """#include <iostream>
#include <string>

// --- 1. Data Coupling ---
double calc_tax_cpp(double price, double rate) {
    return price * rate;
}

// --- 2. Stamp Coupling ---
struct AccountCpp {
    int id;
    std::string name;
    double balance;
};

void print_balance_cpp(const AccountCpp& acc) {
    std::cout << "[2. Stamp Coupling] Balance: " << acc.balance << "\\n";
}

// --- 3. Bundling Coupling ---
class LoggerCpp {
public:
    void info(const std::string& msg) { std::cout << "[3. Bundling Coupling - INFO] " << msg << "\\n"; }
    void error(const std::string& msg) { std::cerr << "[3. Bundling Coupling - ERROR] " << msg << "\\n"; }
};

class ProcessorCpp {
    LoggerCpp& logger;
public:
    ProcessorCpp(LoggerCpp& log) : logger(log) {}
    void run() { logger.info("Processor running using Logger module."); }
};

// --- 4. Control Coupling ---
enum class UserRole { Admin, Standard };

void process_user_cpp(int user_id, UserRole role) {
    if (role == UserRole::Admin) {
        std::cout << "[4. Control Coupling] Admin privileges granted for user " << user_id << "\\n";
    } else {
        std::cout << "[4. Control Coupling] Standard access for user " << user_id << "\\n";
    }
}

// --- 5. Hybrid Coupling ---
struct UserCommandCpp {
    std::string action; // "CREATE", "DELETE"
    int user_id;
    std::string payload;
};

void handle_command_cpp(const UserCommandCpp& cmd) {
    if (cmd.action == "CREATE") {
        std::cout << "[5. Hybrid Coupling] Action CREATE for " << cmd.payload << " (ID: " << cmd.user_id << ")\\n";
    } else if (cmd.action == "DELETE") {
        std::cout << "[5. Hybrid Coupling] Action DELETE for ID: " << cmd.user_id << "\\n";
    }
}

// --- 6. Common Coupling ---
static int g_config_flags = 0;

void update_config_cpp(int flag) {
    g_config_flags |= flag;
    std::cout << "[6. Common Coupling] Config flags updated: " << g_config_flags << "\\n";
}

void apply_config_cpp() {
    if (g_config_flags & 0x01) {
        std::cout << "[6. Common Coupling] Flag 0x01 is active.\\n";
    }
}

// --- 7. Content Coupling ---
class SecretStoreCpp {
private:
    int secret_key = 1234;
    friend void malicious_hacker(SecretStoreCpp& store);
public:
    int get_secret() const { return secret_key; }
};

void malicious_hacker(SecretStoreCpp& store) {
    store.secret_key = 9999; // Directly accessing private member via friend
    std::cout << "[7. Content Coupling] Private secret_key modified via friend access.\\n";
}

int main() {
    std::cout << "=== C++ Coupling Examples ===\\n\\n";

    // 1. Data Coupling
    std::cout << "[1. Data Coupling] Tax: " << calc_tax_cpp(1000.0, 0.10) << "\\n";

    // 2. Stamp Coupling
    AccountCpp acc{101, "Alice", 2500.50};
    print_balance_cpp(acc);

    // 3. Bundling Coupling
    LoggerCpp logger;
    ProcessorCpp proc(logger);
    proc.run();

    // 4. Control Coupling
    process_user_cpp(42, UserRole::Admin);

    // 5. Hybrid Coupling
    UserCommandCpp cmd{"CREATE", 42, "Bob"};
    handle_command_cpp(cmd);

    // 6. Common Coupling
    update_config_cpp(0x01);
    apply_config_cpp();

    // 7. Content Coupling
    SecretStoreCpp store;
    malicious_hacker(store);
    std::cout << "[7. Content Coupling] Secret after alteration: " << store.get_secret() << "\\n";

    return 0;
}
"""

with open("coupling_examples.cpp", "w") as f:
    f.write(cpp_code)

# Python Language Code
py_code = """# === Python Coupling Examples ===

# --- 1. Data Coupling ---
def calc_tax_py(price: float, rate: float) -> float:
    return price * rate

# --- 2. Stamp Coupling ---
class AccountPy:
    def __init__(self, acc_id: int, name: str, balance: float):
        self.id = acc_id
        self.name = name
        self.balance = balance

def print_balance_py(acc: AccountPy):
    print(f"[2. Stamp Coupling] Balance: {acc.balance}")

# --- 3. Bundling Coupling ---
class LoggerPy:
    def info(self, msg: str):
        print(f"[3. Bundling Coupling - INFO] {msg}")
    
    def error(self, msg: str):
        print(f"[3. Bundling Coupling - ERROR] {msg}")

def process_data_py(logger: LoggerPy):
    logger.info("Processing data using Logger module...")

# --- 4. Control Coupling ---
def process_user_py(user_id: int, is_admin: bool = False):
    if is_admin:
        print(f"[4. Control Coupling] Executing privileged task for user {user_id}")
    else:
        print(f"[4. Control Coupling] Executing standard task for user {user_id}")

# --- 5. Hybrid Coupling ---
def handle_request_py(request: dict):
    action = request.get("action")
    data = request.get("payload")
    
    if action == "SAVE":
        print(f"[5. Hybrid Coupling] Saving payload: {data}")
    elif action == "PURGE":
        print(f"[5. Hybrid Coupling] Purging payload: {data}")

# --- 6. Common Coupling ---
shared_config = {"debug_mode": False}

def enable_debug_py():
    global shared_config
    shared_config["debug_mode"] = True
    print("[6. Common Coupling] Debug mode enabled in shared_config")

def run_app_py():
    if shared_config["debug_mode"]:
        print("[6. Common Coupling] Running app in DEBUG mode")

# --- 7. Content Coupling ---
class SecretStorePy:
    def __init__(self):
        self.__secret_key = 42 # Intended private variable via name mangling

def main():
    print("=== Python Coupling Examples ===\\n")

    # 1. Data Coupling
    tax = calc_tax_py(1000.0, 0.10)
    print(f"[1. Data Coupling] Tax: {tax}")

    # 2. Stamp Coupling
    acc = AccountPy(101, "Alice", 2500.50)
    print_balance_py(acc)

    # 3. Bundling Coupling
    logger = LoggerPy()
    process_data_py(logger)

    # 4. Control Coupling
    process_user_py(42, is_admin=True)

    # 5. Hybrid Coupling
    handle_request_py({"action": "SAVE", "payload": "UserData_42"})

    # 6. Common Coupling
    enable_debug_py()
    run_app_py()

    # 7. Content Coupling
    store = SecretStorePy()
    # Bypassing name mangling to modify private variable directly
    store._SecretStorePy__secret_key = 9999
    print(f"[7. Content Coupling] Bypassed private variable value: {store._SecretStorePy__secret_key}")

if __name__ == "__main__":
    main()
"""

with open("coupling_examples.py", "w") as f:
    f.write(py_code)

# Rust Language Code
rust_code = """// === Rust Coupling Examples ===

// --- 1. Data Coupling ---
fn calc_tax_rs(price: f64, rate: f64) -> f64 {
    price * rate
}

// --- 2. Stamp Coupling ---
struct AccountRs {
    id: u64,
    name: String,
    balance: f64,
}

fn print_balance_rs(acc: &AccountRs) {
    println!("[2. Stamp Coupling] Balance: {:.2}", acc.balance);
}

// --- 3. Bundling Coupling ---
struct LoggerRs;
impl LoggerRs {
    fn info(&self, msg: &str) {
        println!("[3. Bundling Coupling - INFO] {}", msg);
    }
}

struct ProcessorRs<'a> {
    logger: &'a LoggerRs,
}
impl<'a> ProcessorRs<'a> {
    fn run(&self) {
        self.logger.info("Processor running using Logger module.");
    }
}

// --- 4. Control Coupling ---
enum Mode {
    Admin,
    User,
}

fn process_user_rs(user_id: u64, mode: Mode) {
    match mode {
        Mode::Admin => println!("[4. Control Coupling] Admin privileges granted for user {}", user_id),
        Mode::User => println!("[4. Control Coupling] Standard access for user {}", user_id),
    }
}

// --- 5. Hybrid Coupling ---
struct RequestPacketRs {
    command_code: u8, // 0x01: SAVE, 0xFF: PURGE
    payload: String,
}

fn handle_request_rs(req: RequestPacketRs) {
    match req.command_code {
        0x01 => println!("[5. Hybrid Coupling] Action SAVE for payload: {}", req.payload),
        0xFF => println!("[5. Hybrid Coupling] Action PURGE for payload: {}", req.payload),
        _ => {},
    }
}

// --- 6. Common Coupling ---
static mut GLOBAL_STATE: i32 = 0;

fn update_state_rs() {
    unsafe {
        GLOBAL_STATE = 10;
        println!("[6. Common Coupling] Updated GLOBAL_STATE to {}", GLOBAL_STATE);
    }
}

fn read_state_rs() {
    unsafe {
        if GLOBAL_STATE == 10 {
            println!("[6. Common Coupling] Read GLOBAL_STATE == 10");
        }
    }
}

// --- 7. Content Coupling ---
mod private_module {
    pub struct SecretStoreRs {
        pub public_field: u32,
        secret_field: u32, // Private field
    }
    impl SecretStoreRs {
        pub fn new() -> Self {
            Self { public_field: 1, secret_field: 42 }
        }
        pub fn get_secret(&self) -> u32 {
            self.secret_field
        }
    }
}

fn hack_content_rs(store: &mut private_module::SecretStoreRs) {
    // Content Coupling simulation via raw pointer in unsafe Rust
    let ptr = store as *mut _ as *mut u32;
    unsafe {
        *ptr.offset(1) = 9999; // Directly overwrite secret_field offset
    }
    println!("[7. Content Coupling] Directly modified private secret_field via raw pointer offset.");
}

fn main() {
    println!("=== Rust Coupling Examples ===\\n");

    // 1. Data Coupling
    let tax = calc_tax_rs(1000.0, 0.10);
    println!("[1. Data Coupling] Tax: {:.2}", tax);

    // 2. Stamp Coupling
    let acc = AccountRs { id: 101, name: String::from("Alice"), balance: 2500.50 };
    print_balance_rs(&acc);

    // 3. Bundling Coupling
    let logger = LoggerRs;
    let proc = ProcessorRs { logger: &logger };
    proc.run();

    // 4. Control Coupling
    process_user_rs(42, Mode::Admin);

    // 5. Hybrid Coupling
    let req = RequestPacketRs { command_code: 0x01, payload: String::from("UserData_42") };
    handle_request_rs(req);

    // 6. Common Coupling
    update_state_rs();
    read_state_rs();

    // 7. Content Coupling
    let mut store = private_module::SecretStoreRs::new();
    hack_content_rs(&mut store);
    println!("[7. Content Coupling] Secret after alteration: {}", store.get_secret());
}
"""

with open("coupling_examples.rs", "w") as f:
    f.write(rust_code)

print("Files generated successfully.")


```

```text
Files generated successfully.


```

7つのモジュール結合度（データ、構造体/スタンプ、バンドリング、制御、ハイブリッド、共有、内容）を、それぞれ1つのファイル内で実行可能なサンプルコードにまとめました。

---

### 1. C言語 (`coupling_examples.c`)

```c
#include <stdio.h>
#include <string.h>

// --- 1. データ結合 (Data Coupling) ---
double calc_tax_c(double price, double rate) {
    return price * rate;
}

// --- 2. 構造体/スタンプ結合 (Stamp Coupling) ---
typedef struct {
    int id;
    char name[50];
    double balance;
} AccountC;

void print_balance_c(const AccountC *acc) {
    printf("[2. Stamp Coupling] Balance: %.2f\n", acc->balance);
}

// --- 3. バンドリング結合 (Bundling Coupling) ---
typedef struct {
    void (*info)(const char*);
    void (*error)(const char*);
} LoggerC;

void log_info_impl(const char* msg) { printf("[3. Bundling Coupling - INFO] %s\n", msg); }
void log_error_impl(const char* msg) { printf("[3. Bundling Coupling - ERROR] %s\n", msg); }

void process_data_c(LoggerC *logger) {
    logger->info("Data processing started.");
}

// --- 4. 制御結合 (Control Coupling) ---
void process_user_c(int user_id, int is_admin) {
    if (is_admin) {
        printf("[4. Control Coupling] Admin privileges granted for user %d\n", user_id);
    } else {
        printf("[4. Control Coupling] Standard access for user %d\n", user_id);
    }
}

// --- 5. ハイブリッド結合 (Hybrid Coupling) ---
typedef struct {
    int cmd; // 1: CREATE, 2: DELETE
    int user_id;
    char name[30];
} CommandPacketC;

void handle_packet_c(CommandPacketC pkt) {
    if (pkt.cmd == 1) {
        printf("[5. Hybrid Coupling] Action CREATE for %s (ID: %d)\n", pkt.name, pkt.user_id);
    } else if (pkt.cmd == 2) {
        printf("[5. Hybrid Coupling] Action DELETE for ID: %d\n", pkt.user_id);
    }
}

// --- 6. 共有結合 (Common Coupling) ---
int g_system_state = 0;

void module_a_c() {
    g_system_state = 1;
    printf("[6. Common Coupling] Module A updated g_system_state to %d\n", g_system_state);
}

void module_b_c() {
    if (g_system_state == 1) {
        printf("[6. Common Coupling] Module B detected g_system_state == 1\n");
    }
}

// --- 7. 内容結合 (Content Coupling) ---
typedef struct {
    int public_val;
    int internal_secret;
} InternalDataC;

void hack_content_c(InternalDataC* data) {
    int *secret_ptr = (int*)data + 1;
    *secret_ptr = 9999; // ポインタ計算で非公開領域を書き換える
    printf("[7. Content Coupling] Internal secret forcefully altered to %d\n", data->internal_secret);
}

int main() {
    printf("=== C Coupling Examples ===\n\n");

    // 1. データ結合
    double tax = calc_tax_c(1000.0, 0.10);
    printf("[1. Data Coupling] Tax: %.2f\n", tax);

    // 2. スタンプ結合
    AccountC acc = {101, "Alice", 2500.50};
    print_balance_c(&acc);

    // 3. バンドリング結合
    LoggerC logger = { log_info_impl, log_error_impl };
    process_data_c(&logger);

    // 4. 制御結合
    process_user_c(42, 1);

    // 5. ハイブリッド結合
    CommandPacketC pkt = {1, 42, "Bob"};
    handle_packet_c(pkt);

    // 6. 共有結合
    module_a_c();
    module_b_c();

    // 7. 内容結合
    InternalDataC internal_data = {10, 42};
    hack_content_c(&internal_data);

    return 0;
}

```

**コンパイル・実行コマンド:**

```bash
gcc -o coupling_c coupling_examples.c
./coupling_c

```

---

### 2. C++ (`coupling_examples.cpp`)

```cpp
#include <iostream>
#include <string>

// --- 1. データ結合 (Data Coupling) ---
double calc_tax_cpp(double price, double rate) {
    return price * rate;
}

// --- 2. 構造体/スタンプ結合 (Stamp Coupling) ---
struct AccountCpp {
    int id;
    std::string name;
    double balance;
};

void print_balance_cpp(const AccountCpp& acc) {
    std::cout << "[2. Stamp Coupling] Balance: " << acc.balance << "\n";
}

// --- 3. バンドリング結合 (Bundling Coupling) ---
class LoggerCpp {
public:
    void info(const std::string& msg) { std::cout << "[3. Bundling Coupling - INFO] " << msg << "\n"; }
    void error(const std::string& msg) { std::cerr << "[3. Bundling Coupling - ERROR] " << msg << "\n"; }
};

class ProcessorCpp {
    LoggerCpp& logger;
public:
    ProcessorCpp(LoggerCpp& log) : logger(log) {}
    void run() { logger.info("Processor running using Logger module."); }
};

// --- 4. 制御結合 (Control Coupling) ---
enum class UserRole { Admin, Standard };

void process_user_cpp(int user_id, UserRole role) {
    if (role == UserRole::Admin) {
        std::cout << "[4. Control Coupling] Admin privileges granted for user " << user_id << "\n";
    } else {
        std::cout << "[4. Control Coupling] Standard access for user " << user_id << "\n";
    }
}

// --- 5. ハイブリッド結合 (Hybrid Coupling) ---
struct UserCommandCpp {
    std::string action; // "CREATE", "DELETE"
    int user_id;
    std::string payload;
};

void handle_command_cpp(const UserCommandCpp& cmd) {
    if (cmd.action == "CREATE") {
        std::cout << "[5. Hybrid Coupling] Action CREATE for " << cmd.payload << " (ID: " << cmd.user_id << ")\n";
    } else if (cmd.action == "DELETE") {
        std::cout << "[5. Hybrid Coupling] Action DELETE for ID: " << cmd.user_id << "\n";
    }
}

// --- 6. 共有結合 (Common Coupling) ---
static int g_config_flags = 0;

void update_config_cpp(int flag) {
    g_config_flags |= flag;
    std::cout << "[6. Common Coupling] Config flags updated: " << g_config_flags << "\n";
}

void apply_config_cpp() {
    if (g_config_flags & 0x01) {
        std::cout << "[6. Common Coupling] Flag 0x01 is active.\n";
    }
}

// --- 7. 内容結合 (Content Coupling) ---
class SecretStoreCpp {
private:
    int secret_key = 1234;
    friend void malicious_hacker(SecretStoreCpp& store);
public:
    int get_secret() const { return secret_key; }
};

void malicious_hacker(SecretStoreCpp& store) {
    store.secret_key = 9999; // friend 権限で private メンバーに直接アクセス
    std::cout << "[7. Content Coupling] Private secret_key modified via friend access.\n";
}

int main() {
    std::cout << "=== C++ Coupling Examples ===\n\n";

    // 1. データ結合
    std::cout << "[1. Data Coupling] Tax: " << calc_tax_cpp(1000.0, 0.10) << "\n";

    // 2. スタンプ結合
    AccountCpp acc{101, "Alice", 2500.50};
    print_balance_cpp(acc);

    // 3. バンドリング結合
    LoggerCpp logger;
    ProcessorCpp proc(logger);
    proc.run();

    // 4. 制御結合
    process_user_cpp(42, UserRole::Admin);

    // 5. ハイブリッド結合
    UserCommandCpp cmd{"CREATE", 42, "Bob"};
    handle_command_cpp(cmd);

    // 6. 共有結合
    update_config_cpp(0x01);
    apply_config_cpp();

    // 7. 内容結合
    SecretStoreCpp store;
    malicious_hacker(store);
    std::cout << "[7. Content Coupling] Secret after alteration: " << store.get_secret() << "\n";

    return 0;
}

```

**コンパイル・実行コマンド:**

```bash
g++ -std=c++11 -o coupling_cpp coupling_examples.cpp
./coupling_cpp

```

---

### 3. Python (`coupling_examples.py`)

```python
# === Python Coupling Examples ===

# --- 1. データ結合 (Data Coupling) ---
def calc_tax_py(price: float, rate: float) -> float:
    return price * rate

# --- 2. 構造体/スタンプ結合 (Stamp Coupling) ---
class AccountPy:
    def __init__(self, acc_id: int, name: str, balance: float):
        self.id = acc_id
        self.name = name
        self.balance = balance

def print_balance_py(acc: AccountPy):
    print(f"[2. Stamp Coupling] Balance: {acc.balance}")

# --- 3. バンドリング結合 (Bundling Coupling) ---
class LoggerPy:
    def info(self, msg: str):
        print(f"[3. Bundling Coupling - INFO] {msg}")
    
    def error(self, msg: str):
        print(f"[3. Bundling Coupling - ERROR] {msg}")

def process_data_py(logger: LoggerPy):
    logger.info("Processing data using Logger module...")

# --- 4. 制御結合 (Control Coupling) ---
def process_user_py(user_id: int, is_admin: bool = False):
    if is_admin:
        print(f"[4. Control Coupling] Executing privileged task for user {user_id}")
    else:
        print(f"[4. Control Coupling] Executing standard task for user {user_id}")

# --- 5. ハイブリッド結合 (Hybrid Coupling) ---
def handle_request_py(request: dict):
    action = request.get("action")
    data = request.get("payload")
    
    if action == "SAVE":
        print(f"[5. Hybrid Coupling] Saving payload: {data}")
    elif action == "PURGE":
        print(f"[5. Hybrid Coupling] Purging payload: {data}")

# --- 6. 共有結合 (Common Coupling) ---
shared_config = {"debug_mode": False}

def enable_debug_py():
    global shared_config
    shared_config["debug_mode"] = True
    print("[6. Common Coupling] Debug mode enabled in shared_config")

def run_app_py():
    if shared_config["debug_mode"]:
        print("[6. Common Coupling] Running app in DEBUG mode")

# --- 7. 内容結合 (Content Coupling) ---
class SecretStorePy:
    def __init__(self):
        self.__secret_key = 42 # 名前の修飾(Name Mangling)で非公開化した変数

def main():
    print("=== Python Coupling Examples ===\n")

    # 1. データ結合
    tax = calc_tax_py(1000.0, 0.10)
    print(f"[1. Data Coupling] Tax: {tax}")

    # 2. スタンプ結合
    acc = AccountPy(101, "Alice", 2500.50)
    print_balance_py(acc)

    # 3. バンドリング結合
    logger = LoggerPy()
    process_data_py(logger)

    # 4. 制御結合
    process_user_py(42, is_admin=True)

    # 5. ハイブリッド結合
    handle_request_py({"action": "SAVE", "payload": "UserData_42"})

    # 6. 共有結合
    enable_debug_py()
    run_app_py()

    # 7. 内容結合
    store = SecretStorePy()
    # Name Manglingの規則を利用して外部から直接上書き
    store._SecretStorePy__secret_key = 9999
    print(f"[7. Content Coupling] Bypassed private variable value: {store._SecretStorePy__secret_key}")

if __name__ == "__main__":
    main()

```

**実行コマンド:**

```bash
python3 coupling_examples.py

```

---

### 4. Rust (`coupling_examples.rs`)

```rust
// === Rust Coupling Examples ===

// --- 1. データ結合 (Data Coupling) ---
fn calc_tax_rs(price: f64, rate: f64) -> f64 {
    price * rate
}

// --- 2. 構造体/スタンプ結合 (Stamp Coupling) ---
struct AccountRs {
    id: u64,
    name: String,
    balance: f64,
}

fn print_balance_rs(acc: &AccountRs) {
    println!("[2. Stamp Coupling] Balance: {:.2}", acc.balance);
}

// --- 3. バンドリング結合 (Bundling Coupling) ---
struct LoggerRs;
impl LoggerRs {
    fn info(&self, msg: &str) {
        println!("[3. Bundling Coupling - INFO] {}", msg);
    }
}

struct ProcessorRs<'a> {
    logger: &'a LoggerRs,
}
impl<'a> ProcessorRs<'a> {
    fn run(&self) {
        self.logger.info("Processor running using Logger module.");
    }
}

// --- 4. 制御結合 (Control Coupling) ---
enum Mode {
    Admin,
    User,
}

fn process_user_rs(user_id: u64, mode: Mode) {
    match mode {
        Mode::Admin => println!("[4. Control Coupling] Admin privileges granted for user {}", user_id),
        Mode::User => println!("[4. Control Coupling] Standard access for user {}", user_id),
    }
}

// --- 5. ハイブリッド結合 (Hybrid Coupling) ---
struct RequestPacketRs {
    command_code: u8, // 0x01: SAVE, 0xFF: PURGE
    payload: String,
}

fn handle_request_rs(req: RequestPacketRs) {
    match req.command_code {
        0x01 => println!("[5. Hybrid Coupling] Action SAVE for payload: {}", req.payload),
        0xFF => println!("[5. Hybrid Coupling] Action PURGE for payload: {}", req.payload),
        _ => {},
    }
}

// --- 6. 共有結合 (Common Coupling) ---
static mut GLOBAL_STATE: i32 = 0;

fn update_state_rs() {
    unsafe {
        GLOBAL_STATE = 10;
        println!("[6. Common Coupling] Updated GLOBAL_STATE to {}", GLOBAL_STATE);
    }
}

fn read_state_rs() {
    unsafe {
        if GLOBAL_STATE == 10 {
            println!("[6. Common Coupling] Read GLOBAL_STATE == 10");
        }
    }
}

// --- 7. 内容結合 (Content Coupling) ---
mod private_module {
    pub struct SecretStoreRs {
        pub public_field: u32,
        secret_field: u32, // プライベートフィールド
    }
    impl SecretStoreRs {
        pub fn new() -> Self {
            Self { public_field: 1, secret_field: 42 }
        }
        pub fn get_secret(&self) -> u32 {
            self.secret_field
        }
    }
}

fn hack_content_rs(store: &mut private_module::SecretStoreRs) {
    // Safe Rustでは不可能なため、生ポインタとunsafeブロックでメモリオフセットを直接変更
    let ptr = store as *mut _ as *mut u32;
    unsafe {
        *ptr.offset(1) = 9999;
    }
    println!("[7. Content Coupling] Directly modified private secret_field via raw pointer offset.");
}

fn main() {
    println!("=== Rust Coupling Examples ===\n");

    // 1. データ結合
    let tax = calc_tax_rs(1000.0, 0.10);
    println!("[1. Data Coupling] Tax: {:.2}", tax);

    // 2. スタンプ結合
    let acc = AccountRs { id: 101, name: String::from("Alice"), balance: 2500.50 };
    print_balance_rs(&acc);

    // 3. バンドリング結合
    let logger = LoggerRs;
    let proc = ProcessorRs { logger: &logger };
    proc.run();

    // 4. 制御結合
    process_user_rs(42, Mode::Admin);

    // 5. ハイブリッド結合
    let req = RequestPacketRs { command_code: 0x01, payload: String::from("UserData_42") };
    handle_request_rs(req);

    // 6. 共有結合
    update_state_rs();
    read_state_rs();

    // 7. 内容結合
    let mut store = private_module::SecretStoreRs::new();
    hack_content_rs(&mut store);
    println!("[7. Content Coupling] Secret after alteration: {}", store.get_secret());
}

```

**コンパイル・実行コマンド:**

```bash
rustc coupling_examples.rs
./coupling_examples

```
# Q4 C Puzzle bookのように出力で、それぞれの処理の妥当性、危険性がわかるようにしてください。
A4 
『C Puzzle Book』のスタイルで、各プログラムを実行した際に何が起きているのか、**出力結果の裏に潜む妥当性と危険性**を対比・解説します。

各コードを実行すると、表面上はすべて「正常動作」しているように見えます。しかし、低レイヤーのメモリ構造や型システムを紐解くと、**なぜそれが危険なのか**が見えてきます。

---

## 1. データ結合 (Data Coupling)

### 出力

```text
[1. Data Coupling] Tax: 100.00

```

### パズル解説

* **妥当性 (Good):**
関数は引数として渡された値（`price` と `rate`）のみを利用し、計算結果を返します。副作用が一切なく、外部の状態にも依存しません。
* **危険性 (None):**
危険性はゼロです。型安全であり、メモリ安全でもあります。引数の数が増えすぎるとコードの見通しが悪くなる点を除けば、**最も推奨される設計**です。

---

## 2. 構造体結合 / スタンプ結合 (Stamp Coupling)

### 出力

```text
[2. Stamp Coupling] Balance: 2500.50

```

### パズル解説

* **妥当性 (Acceptable):**
関連するデータを構造体としてまとめることで、関数の引数リストをすっきり保つことができます。
* **危険性 (Low / Maintenance Risk):**
この関数は `balance` しか必要としていません。しかし、将来 `Account` 構造体にまったく関係ない巨大な配列フィールドが追加されたり型が変更されたりした場合、**この関数自体も影響を受け（再コンパイルが必要になるなど）、保守性が低下**します。

---

## 3. バンドリング結合 (Bundling Coupling)

### 出力

```text
[3. Bundling Coupling - INFO] Data processing started.

```

### パズル解説

* **妥当性 (Good in OOP):**
オブジェクト指向設計において一般的です。「ログ機能」という概念（モジュール）をまるごと注入（Dependency Injection）して利用しています。
* **危険性 (Low - Medium):**
モジュール全体に強く依存するため、`Logger` クラスのインターフェースが変更された場合、依存しているすべてのクラスが一斉に破壊されます。適切なインターフェース分離（抽象クラスや trait）がない場合、影響範囲が不必要に広がります。

---

## 4. 制御結合 (Control Coupling)

### 出力

```text
[4. Control Coupling] Admin privileges granted for user 42

```

### パズル解説

* **妥当性 (Questionable):**
1つの関数で複数の役割をこなせるため、コード量を一見減らせるように思えます。
* **危険性 (Medium - Design Smell):**
呼び出し側が `is_admin` や `Mode::Admin` といった制御用フラグを渡すことで、**「受け取る関数が内部でどう分岐するか」を呼び出し側が知っている必要がある**（カプセル化の欠如）状態を作ります。条件分岐（`if` / `match`）が増大し、スパゲッティコードの温床になります。

---

## 5. ハイブリッド結合 (Hybrid Coupling)

### 出力

```text
[5. Hybrid Coupling] Action CREATE for Bob (ID: 42)

```

### パズル解説

* **妥当性 (Common in Networking):**
ネットワーク通信のパケット（JSONやバイナリヘッダー）など、データとコマンドコードを1つのデータ構造で送受信せざるを得ない場面ではよく使われます。
* **危険性 (Medium - High):**
「データ（`name`, `id`）」と「制御（`cmd`）」が混在しているため、呼び出し側と受け取り側の双方がコマンドコード（`1: CREATE`, `2: DELETE` など）の意味を共有し続けなければなりません。コマンド追加時に修正漏れが発生しやすく、不正なコマンド番号が渡された際の例外処理が複雑化します。

---

## 6. 共有結合 / 共通結合 (Common Coupling)

### 出力

```text
[6. Common Coupling] Module A updated g_system_state to 1
[6. Common Coupling] Module B detected g_system_state == 1

```

### パズル解説

* **妥当性 (Convenient but Bad):**
関数の引数経由でデータを渡す必要がないため、手軽に状態を共有できます。
* **危険性 (High - Thread/State Danger):**
* **C/C++/Python:** 誰がいつ `g_system_state` を変更したか追尾不能になります。バグが発生した際、影響範囲がプログラム全体に及びます。また、マルチスレッド環境ではデータ競合（Data Race）を引き起こし、致命的なクラッシュや値の破壊を招きます。
* **Rustの挙動:** Rustでは `static mut` へのアクセスが完全に追跡不可になるため、`unsafe` ブロックを強制され、コンパイラが「この処理は安全ではない」と強い警告を発します。





---

## 7. 内容結合 / 内部結合 (Content Coupling)

### 出力

```text
[7. Content Coupling] Internal secret forcefully altered to 9999

```

### パズル解説

ここが『C Puzzle Book』の最大のハイライトです。言語ごとに「カプセル化をどう破壊しているか」の仕組みが異なります。

#### 言語ごとの危険性のトリック

* C言語 (`*(ptr + 1) = 9999;`):


* **トリック:** `InternalDataC` 構造体のアドレスを取得し、ポインタ計算で1つ隣（`int` 1つ分シフト）のメモリ空間へ強行突破して書き換えています。


* **危険性 (極高):** もし将来、構造体の定義が `struct { short public_val; int internal_secret; }` のように変更されたらどうなるでしょうか？ ポインタ計算のアラインメントが崩れ、関係のないメモリ領域を破壊（メモリ破壊バグ）してSegmentation Fault（異常終了）を引き起こすか、セキュリティホール（任意コード実行）になります。


* C++ (`friend void malicious_hacker(...)`):


* **トリック:** `friend` キーワードを使って `private` の壁を言語仕様レベルで無効化しています。


* **危険性 (高):** カプセル化を完全に放棄しています。クラスの内部実装を変更した瞬間、`friend` 指定された外部関数が壊れます。


* Python (`store._SecretStorePy__secret_key = 9999`):


* **トリック:** Pythonの `__var`（プライベート変数）は、実際には `_ClassName__var` という名前に自動変換（Name Mangling）されているだけです。Pythonには本物の `private` は存在せず、内部の変換規則を知っていれば外部から簡単に書き換えられます。


* **危険性 (中 - 高):** 意図されたプライベートな状態が壊されるため、クラスの不変条件（Invariant）が崩れ、予期せぬロジックエラーを引き起こします。


* Rust (`unsafe` による生ポインタ操作):


* **トリック:** 通常の Safe Rust では `secret_field` にアクセスすると即座にコンパイルエラーとなります。しかし、`as *mut u32` で生ポインタ（Raw Pointer）にキャストし、C言語と同じメモリオフセット操作を行うことで、コンパイラの安全保証を強行突破しています。


* **危険性 (極高):** Rustの型システムと所有権ルール（メモリ安全性の保証）を完全に踏みにじる行為です。未定義動作（Undefined Behavior）を誘発し、Rustを使う意義そのものを消し去ります。



---

## パズルからの学び

| 結合度 | 動作上の見え方 | メモリ・設計上の実態 |
| --- | --- | --- |
| **データ結合** | 完全な透明性 | 予測可能・安全 |
| **制御/ハイブリッド** | 一見便利 | 呼び出し側と密結合し、変更に脆い |
| **共有結合** | どこでも動く | 時間経過・マルチスレッドで状態が崩壊 |
| **内容結合** | 正常に書き換わる | **メモリ構造の僅かな変化でプログラム全体が即死する** |

# Q5 The C puzzle bookのように結果の妥当性、危険性がわかる出力をするソースコードをそれぞれのC, C++, Python, RUstファイルについかしてください。
A5
```python
# C Language Code
c_code = """#include <stdio.h>
#include <string.h>
#include <stddef.h>

// --- 1. Data Coupling ---
double calc_tax_c(double price, double rate) {
    return price * rate;
}

// --- 2. Stamp Coupling ---
typedef struct {
    int id;
    char name[50];
    double balance;
    char unused_buffer[1024]; // Demonstrating unnecessary overhead/dependency
} AccountC;

void print_balance_c(const AccountC *acc) {
    printf("[2. Stamp Coupling]\n");
    printf("   Passes %lu bytes struct when only 8 bytes (double balance) is used!\n", sizeof(AccountC));
    printf("   Balance: %.2f\n\n", acc->balance);
}

// --- 3. Bundling Coupling ---
typedef struct {
    void (*info)(const char*);
    void (*error)(const char*);
} LoggerC;

void log_info_impl(const char* msg) { printf("   [INFO] %s\n", msg); }
void log_error_impl(const char* msg) { printf("   [ERROR] %s\n", msg); }

void process_data_c(LoggerC *logger) {
    printf("[3. Bundling Coupling]\n");
    printf("   Module depends on entire LoggerC struct/vtable.\n");
    logger->info("Data processing started.");
    printf("\n");
}

// --- 4. Control Coupling ---
void process_user_c(int user_id, int is_admin) {
    printf("[4. Control Coupling]\n");
    printf("   Caller passes flag 'is_admin=%d' to force internal logic branch.\n", is_admin);
    if (is_admin) {
        printf("   -> Branch executed: Admin privileges granted for user %d\n", user_id);
    } else {
        printf("   -> Branch executed: Standard access for user %d\n", user_id);
    }
    printf("\n");
}

// --- 5. Hybrid Coupling ---
typedef struct {
    int cmd; // 1: CREATE, 2: DELETE
    int user_id;
    char name[30];
} CommandPacketC;

void handle_packet_c(CommandPacketC pkt) {
    printf("[5. Hybrid Coupling]\n");
    printf("   Data payload contains embedded control code (cmd=%d).\n", pkt.cmd);
    if (pkt.cmd == 1) {
        printf("   -> Interpreted Action: CREATE for %s (ID: %d)\n", pkt.name, pkt.user_id);
    } else if (pkt.cmd == 2) {
        printf("   -> Interpreted Action: DELETE for ID: %d\n", pkt.user_id);
    }
    printf("\n");
}

// --- 6. Common Coupling ---
int g_system_state = 0;

void module_a_c() {
    g_system_state = 1;
    printf("   [Module A] Silently modified global g_system_state -> %d\n", g_system_state);
}

void module_b_c() {
    printf("   [Module B] Reads global g_system_state: %d\n", g_system_state);
    if (g_system_state == 1) {
        printf("   -> DANGER: Behavior changed due to invisible side-effect from another module!\n");
    }
}

// --- 7. Content Coupling ---
typedef struct {
    int public_val;
    int internal_secret; // Intended private state
} InternalDataC;

void hack_content_c(InternalDataC* data) {
    printf("   Before attack: public_val=%d, internal_secret=%d\n", data->public_val, data->internal_secret);
    
    // Memory offset hacking: assuming layout
    int *secret_ptr = (int*)data + 1;
    *secret_ptr = 9999; 
    
    printf("   After attack : public_val=%d, internal_secret=%d\n", data->public_val, data->internal_secret);
    printf("   CRITICAL DANGER: Memory offset calculation (data + 1) directly mutated internal struct member!\n");
    printf("   If struct layout changes (e.g. alignment or new field), this corrupts random memory!\n");
}

int main() {
    printf("========================================================\n");
    printf("               C COUPLING PUZZLE DEMO                  \n");
    printf("========================================================\n\n");

    // 1. Data Coupling
    printf("[1. Data Coupling]\n");
    double tax = calc_tax_c(1000.0, 0.10);
    printf("   Tax calculated: %.2f\n", tax);
    printf("   SAFE/VALID: Inputs are pure values, zero side-effects.\n\n");

    // 2. Stamp Coupling
    AccountC acc = {101, "Alice", 2500.50, {0}};
    print_balance_c(&acc);

    // 3. Bundling Coupling
    LoggerC logger = { log_info_impl, log_error_impl };
    process_data_c(&logger);

    // 4. Control Coupling
    process_user_c(42, 1);

    // 5. Hybrid Coupling
    CommandPacketC pkt = {1, 42, "Bob"};
    handle_packet_c(pkt);

    // 6. Common Coupling
    printf("[6. Common/Global Coupling]\n");
    module_a_c();
    module_b_c();
    printf("   DANGER: Global state leads to race conditions and untraceable bugs.\n\n");

    // 7. Content Coupling
    printf("[7. Content Coupling (Memory Hack)]\n");
    InternalDataC internal_data = {10, 42};
    hack_content_c(&internal_data);
    printf("\n========================================================\n");

    return 0;
}
"""

with open("coupling_examples.c", "w") as f:
    f.write(c_code)

# C++ Language Code
cpp_code = """#include <iostream>
#include <string>

// --- 1. Data Coupling ---
double calc_tax_cpp(double price, double rate) {
    return price * rate;
}

// --- 2. Stamp Coupling ---
struct AccountCpp {
    int id;
    std::string name;
    double balance;
    char unused_padding[2048];
};

void print_balance_cpp(const AccountCpp& acc) {
    std::cout << "[2. Stamp Coupling]\n";
    std::cout << "   Received struct size: " << sizeof(AccountCpp) << " bytes.\n";
    std::cout << "   Used field: balance = " << acc.balance << "\n";
    std::cout << "   RISK: Tight coupling to unused data fields & memory bloat.\n\n";
}

// --- 3. Bundling Coupling ---
class LoggerCpp {
public:
    void info(const std::string& msg) { std::cout << "   [INFO] " << msg << "\n"; }
    void error(const std::string& msg) { std::cerr << "   [ERROR] " << msg << "\n"; }
};

class ProcessorCpp {
    LoggerCpp& logger;
public:
    ProcessorCpp(LoggerCpp& log) : logger(log) {}
    void run() {
        std::cout << "[3. Bundling Coupling]\n";
        logger.info("Processor executing. Entire LoggerCpp interface exposed.");
        std::cout << "\n";
    }
};

// --- 4. Control Coupling ---
enum class UserRole { Admin, Standard };

void process_user_cpp(int user_id, UserRole role) {
    std::cout << "[4. Control Coupling]\n";
    if (role == UserRole::Admin) {
        std::cout << "   -> Executing Admin branch for ID " << user_id << "\n";
    } else {
        std::cout << "   -> Executing Standard branch for ID " << user_id << "\n";
    }
    std::cout << "   RISK: Caller controls callee's execution flow via flags.\n\n";
}

// --- 5. Hybrid Coupling ---
struct UserCommandCpp {
    std::string action; // Control directive: "CREATE", "DELETE"
    int user_id;
    std::string payload;
};

void handle_command_cpp(const UserCommandCpp& cmd) {
    std::cout << "[5. Hybrid Coupling]\n";
    std::cout << "   Packet Action Directive: '" << cmd.action << "'\n";
    if (cmd.action == "CREATE") {
        std::cout << "   -> Branch 'CREATE' triggered for " << cmd.payload << "\n";
    }
    std::cout << "   RISK: Data structure encapsulates both logic flags and data.\n\n";
}

// --- 6. Common Coupling ---
static int g_config_flags = 0;

void update_config_cpp(int flag) {
    g_config_flags |= flag;
    std::cout << "   [Module A] Modified static global g_config_flags = " << g_config_flags << "\n";
}

void apply_config_cpp() {
    std::cout << "   [Module B] Reading global state: " << g_config_flags << "\n";
    if (g_config_flags & 0x01) {
        std::cout << "   -> Feature 0x01 enabled via shared global state!\n";
    }
}

// --- 7. Content Coupling ---
class SecretStoreCpp {
private:
    int secret_key = 1234;
    friend void malicious_hacker(SecretStoreCpp& store);
public:
    int get_secret() const { return secret_key; }
};

void malicious_hacker(SecretStoreCpp& store) {
    std::cout << "   Before friend bypass: secret_key = " << store.get_secret() << "\n";
    store.secret_key = 9999; // Bypasses private encapsulation
    std::cout << "   After friend bypass : secret_key = " << store.get_secret() << "\n";
    std::cout << "   CRITICAL DANGER: Encapsulation completely broken via 'friend' keyword!\n";
}

int main() {
    std::cout << "========================================================\n";
    std::cout << "              C++ COUPLING PUZZLE DEMO                 \n";
    std::cout << "========================================================\n\n";

    // 1. Data Coupling
    std::cout << "[1. Data Coupling]\n";
    std::cout << "   Tax calculated: " << calc_tax_cpp(1000.0, 0.10) << "\n";
    std::cout << "   VALID: Minimal dependency, fully decoupled.\n\n";

    // 2. Stamp Coupling
    AccountCpp acc{101, "Alice", 2500.50, {0}};
    print_balance_cpp(acc);

    // 3. Bundling Coupling
    LoggerCpp logger;
    ProcessorCpp proc(logger);
    proc.run();

    // 4. Control Coupling
    process_user_cpp(42, UserRole::Admin);

    // 5. Hybrid Coupling
    UserCommandCpp cmd{"CREATE", 42, "Bob"};
    handle_command_cpp(cmd);

    // 6. Common Coupling
    std::cout << "[6. Common Coupling]\n";
    update_config_cpp(0x01);
    apply_config_cpp();
    std::cout << "   DANGER: Shared static variables introduce hidden side-effects.\n\n";

    // 7. Content Coupling
    std::cout << "[7. Content Coupling]\n";
    SecretStoreCpp store;
    malicious_hacker(store);

    std::cout << "\n========================================================\n";
    return 0;
}
"""

with open("coupling_examples.cpp", "w") as f:
    f.write(cpp_code)

# Python Language Code
py_code = """import sys

# === Python Coupling Puzzle Demo ===

# --- 1. Data Coupling ---
def calc_tax_py(price: float, rate: float) -> float:
    return price * rate

# --- 2. Stamp Coupling ---
class AccountPy:
    def __init__(self, acc_id: int, name: str, balance: float):
        self.id = acc_id
        self.name = name
        self.balance = balance
        self.large_metadata = [0] * 10000 # Unnecessary memory bloat

def print_balance_py(acc: AccountPy):
    print("[2. Stamp Coupling]")
    print(f"   Received object with {sys.getsizeof(acc.large_metadata)} bytes of unused metadata.")
    print(f"   Used property: balance = {acc.balance}")
    print("   RISK: Unnecessary dependency on entire AccountPy object.\n")

# --- 3. Bundling Coupling ---
class LoggerPy:
    def info(self, msg: str):
        print(f"   [INFO] {msg}")

def process_data_py(logger: LoggerPy):
    print("[3. Bundling Coupling]")
    logger.info("Processing data using entire Logger object.")
    print("   RISK: High module coupling to Logger implementation.\n")

# --- 4. Control Coupling ---
def process_user_py(user_id: int, is_admin: bool = False):
    print("[4. Control Coupling]")
    print(f"   Caller passed flag 'is_admin={is_admin}'")
    if is_admin:
        print(f"   -> Executing Admin privileged flow for user {user_id}")
    else:
        print(f"   -> Executing Standard flow for user {user_id}")
    print("   RISK: Function behavior is controlled by caller flag.\n")

# --- 5. Hybrid Coupling ---
def handle_request_py(request: dict):
    print("[5. Hybrid Coupling]")
    action = request.get("action")
    data = request.get("payload")
    print(f"   Embedded Directive: '{action}', Data: '{data}'")
    if action == "SAVE":
        print(f"   -> Handled SAVE logic for {data}")
    print("   RISK: Control codes and data payload mixed in single structure.\n")

# --- 6. Common Coupling ---
shared_config = {"debug_mode": False}

def enable_debug_py():
    global shared_config
    shared_config["debug_mode"] = True
    print("   [Module A] Silently modified global shared_config['debug_mode'] = True")

def run_app_py():
    print(f"   [Module B] Reading shared_config['debug_mode']: {shared_config['debug_mode']}")
    if shared_config["debug_mode"]:
        print("   -> Execution changed: Running app in DEBUG mode due to global state!")

# --- 7. Content Coupling ---
class SecretStorePy:
    def __init__(self):
        self.__secret_key = 42 # Private field via Name Mangling

def main():
    print("========================================================")
    print("             PYTHON COUPLING PUZZLE DEMO                ")
    print("========================================================\n")

    # 1. Data Coupling
    print("[1. Data Coupling]")
    tax = calc_tax_py(1000.0, 0.10)
    print(f"   Tax calculated: {tax}")
    print("   VALID: Pure arguments, immutable primitives.\n")

    # 2. Stamp Coupling
    acc = AccountPy(101, "Alice", 2500.50)
    print_balance_py(acc)

    # 3. Bundling Coupling
    logger = LoggerPy()
    process_data_py(logger)

    # 4. Control Coupling
    process_user_py(42, is_admin=True)

    # 5. Hybrid Coupling
    handle_request_py({"action": "SAVE", "payload": "UserData_42"})

    # 6. Common Coupling
    print("[6. Common Coupling]")
    enable_debug_py()
    run_app_py()
    print("   DANGER: Global dictionary state introduces un-trackable side-effects.\n")

    # 7. Content Coupling
    print("[7. Content Coupling]")
    store = SecretStorePy()
    print("   Attempting to bypass private attribute encapsulation...")
    print(f"   Before attack: _SecretStorePy__secret_key = {store._SecretStorePy__secret_key}")
    store._SecretStorePy__secret_key = 9999
    print(f"   After attack : _SecretStorePy__secret_key = {store._SecretStorePy__secret_key}")
    print("   CRITICAL DANGER: Python Name Mangling bypassed! Internal class state violated.")

    print("\n========================================================")

if __name__ == "__main__":
    main()
"""

with open("coupling_examples.py", "w") as f:
    f.write(py_code)

# Rust Language Code
rust_code = """// === Rust Coupling Puzzle Demo ===

// --- 1. Data Coupling ---
fn calc_tax_rs(price: f64, rate: f64) -> f64 {
    price * rate
}

// --- 2. Stamp Coupling ---
struct AccountRs {
    id: u64,
    name: String,
    balance: f64,
    unused_padding: [u8; 1024],
}

fn print_balance_rs(acc: &AccountRs) {
    println!("[2. Stamp Coupling]");
    println!("   Received struct size: {} bytes", std::mem::size_of::<AccountRs>());
    println!("   Used field: balance = {:.2}", acc.balance);
    println!("   RISK: Unnecessary struct dependency and size bloat.\\n");
}

// --- 3. Bundling Coupling ---
struct LoggerRs;
impl LoggerRs {
    fn info(&self, msg: &str) {
        println!("   [INFO] {}", msg);
    }
}

struct ProcessorRs<'a> {
    logger: &'a LoggerRs,
}
impl<'a> ProcessorRs<'a> {
    fn run(&self) {
        println!("[3. Bundling Coupling]");
        self.logger.info("Processor running with direct Logger dependence.");
        println!("\\n");
    }
}

// --- 4. Control Coupling ---
enum Mode { Admin, User }

fn process_user_rs(user_id: u64, mode: Mode) {
    println!("[4. Control Coupling]");
    match mode {
        Mode::Admin => println!("   -> Executing Admin logic branch for ID {}", user_id),
        Mode::User => println!("   -> Executing Standard logic branch for ID {}", user_id),
    }
    println!("   RISK: Control flag forces internal branching logic.\\n");
}

// --- 5. Hybrid Coupling ---
struct RequestPacketRs {
    command_code: u8, // 0x01: SAVE, 0xFF: PURGE
    payload: String,
}

fn handle_request_rs(req: RequestPacketRs) {
    println!("[5. Hybrid Coupling]");
    println!("   Received Command Code: {:#04x}", req.command_code);
    match req.command_code {
        0x01 => println!("   -> Executing SAVE handler for payload: {}", req.payload),
        0xFF => println!("   -> Executing PURGE handler for payload: {}", req.payload),
        _ => {},
    }
    println!("   RISK: Control logic code embedded directly within data packet.\\n");
}

// --- 6. Common Coupling ---
static mut GLOBAL_STATE: i32 = 0;

fn update_state_rs() {
    unsafe {
        GLOBAL_STATE = 10;
        println!("   [Module A] Updated static mut GLOBAL_STATE = {}", GLOBAL_STATE);
    }
}

fn read_state_rs() {
    unsafe {
        println!("   [Module B] Reading static mut GLOBAL_STATE = {}", GLOBAL_STATE);
        if GLOBAL_STATE == 10 {
            println!("   -> Behavior modified by un-tracked global state!");
        }
    }
}

// --- 7. Content Coupling ---
mod private_module {
    pub struct SecretStoreRs {
        pub public_field: u32,
        secret_field: u32, // Private field
    }
    impl SecretStoreRs {
        pub fn new() -> Self {
            Self { public_field: 1, secret_field: 42 }
        }
        pub fn get_secret(&self) -> u32 {
            self.secret_field
        }
    }
}

fn hack_content_rs(store: &mut private_module::SecretStoreRs) {
    println!("   Before raw pointer hack: secret_field = {}", store.get_secret());
    
    // Unsafe raw pointer offset bypass
    let ptr = store as *mut _ as *mut u32;
    unsafe {
        *ptr.offset(1) = 9999;
    }
    
    println!("   After raw pointer hack : secret_field = {}", store.get_secret());
    println!("   CRITICAL DANGER: Safe Rust encapsulation destroyed via raw pointer offset!");
    println!("   This causes Undefined Behavior (UB) and breaks Rust memory safety guarantees.");
}

fn main() {
    println!("========================================================");
    println!("              RUST COUPLING PUZZLE DEMO                 ");
    println!("========================================================\\n");

    // 1. Data Coupling
    println!("[1. Data Coupling]");
    let tax = calc_tax_rs(1000.0, 0.10);
    println!("   Tax calculated: {:.2}", tax);
    println!("   VALID: Clean parameter passing, 100% memory safe.\\n");

    // 2. Stamp Coupling
    let acc = AccountRs { id: 101, name: String::from("Alice"), balance: 2500.50, unused_padding: [0; 1024] };
    print_balance_rs(&acc);

    // 3. Bundling Coupling
    let logger = LoggerRs;
    let proc = ProcessorRs { logger: &logger };
    proc.run();

    // 4. Control Coupling
    process_user_rs(42, Mode::Admin);

    // 5. Hybrid Coupling
    let req = RequestPacketRs { command_code: 0x01, payload: String::from("UserData_42") };
    handle_request_rs(req);

    // 6. Common Coupling
    println!("[6. Common Coupling]");
    update_state_rs();
    read_state_rs();
    println!("   DANGER: static mut requires 'unsafe' and causes data races in multi-threading.\\n");

    // 7. Content Coupling
    println!("[7. Content Coupling]");
    let mut store = private_module::SecretStoreRs::new();
    hack_content_rs(&mut store);

    println!("\\n========================================================");
}
"""

with open("coupling_examples.rs", "w") as f:
    f.write(rust_code)

print("All 4 files updated with C Puzzle Book style output formatting.")


```

```text
All 4 files updated with C Puzzle Book style output formatting.


```

C Puzzle Bookのスタイルに合わせて、「一見正しく動いているように見えるが、出力を見ればメモリオーバーヘッド・制御漏れ・内部状態の非合法破壊がひと目でわかるログ出力」を埋め込んだ各言語ソースコードを作成しました。

以下のファイルをご利用いただけます：

* C言語: 


* C++: 


* Python: 


* Rust: 



---

### 各言語ファイルのソースコード全文

#### 1. C言語 (`coupling_examples.c`)

```c
#include <stdio.h>
#include <string.h>
#include <stddef.h>

// --- 1. Data Coupling ---
double calc_tax_c(double price, double rate) {
    return price * rate;
}

// --- 2. Stamp Coupling ---
typedef struct {
    int id;
    char name[50];
    double balance;
    char unused_buffer[1024]; // 不要なメモリ依存を検証するためのバッファ
} AccountC;

void print_balance_c(const AccountC *acc) {
    printf("[2. Stamp Coupling]\n");
    printf("   Passes %lu bytes struct when only 8 bytes (double balance) is used!\n", sizeof(AccountC));
    printf("   Balance: %.2f\n\n", acc->balance);
}

// --- 3. Bundling Coupling ---
typedef struct {
    void (*info)(const char*);
    void (*error)(const char*);
} LoggerC;

void log_info_impl(const char* msg) { printf("   [INFO] %s\n", msg); }
void log_error_impl(const char* msg) { printf("   [ERROR] %s\n", msg); }

void process_data_c(LoggerC *logger) {
    printf("[3. Bundling Coupling]\n");
    printf("   Module depends on entire LoggerC struct/vtable.\n");
    logger->info("Data processing started.");
    printf("\n");
}

// --- 4. Control Coupling ---
void process_user_c(int user_id, int is_admin) {
    printf("[4. Control Coupling]\n");
    printf("   Caller passes flag 'is_admin=%d' to force internal logic branch.\n", is_admin);
    if (is_admin) {
        printf("   -> Branch executed: Admin privileges granted for user %d\n", user_id);
    } else {
        printf("   -> Branch executed: Standard access for user %d\n", user_id);
    }
    printf("\n");
}

// --- 5. Hybrid Coupling ---
typedef struct {
    int cmd; // 1: CREATE, 2: DELETE
    int user_id;
    char name[30];
} CommandPacketC;

void handle_packet_c(CommandPacketC pkt) {
    printf("[5. Hybrid Coupling]\n");
    printf("   Data payload contains embedded control code (cmd=%d).\n", pkt.cmd);
    if (pkt.cmd == 1) {
        printf("   -> Interpreted Action: CREATE for %s (ID: %d)\n", pkt.name, pkt.user_id);
    } else if (pkt.cmd == 2) {
        printf("   -> Interpreted Action: DELETE for ID: %d\n", pkt.user_id);
    }
    printf("\n");
}

// --- 6. Common Coupling ---
int g_system_state = 0;

void module_a_c() {
    g_system_state = 1;
    printf("   [Module A] Silently modified global g_system_state -> %d\n", g_system_state);
}

void module_b_c() {
    printf("   [Module B] Reads global g_system_state: %d\n", g_system_state);
    if (g_system_state == 1) {
        printf("   -> DANGER: Behavior changed due to invisible side-effect from another module!\n");
    }
}

// --- 7. Content Coupling ---
typedef struct {
    int public_val;
    int internal_secret; // 非公開として設計されたデータ領域
} InternalDataC;

void hack_content_c(InternalDataC* data) {
    printf("   Before attack: public_val=%d, internal_secret=%d\n", data->public_val, data->internal_secret);
    
    // メモリオフセット計算による強硬突破
    int *secret_ptr = (int*)data + 1;
    *secret_ptr = 9999; 
    
    printf("   After attack : public_val=%d, internal_secret=%d\n", data->public_val, data->internal_secret);
    printf("   CRITICAL DANGER: Memory offset calculation (data + 1) directly mutated internal struct member!\n");
    printf("   If struct layout changes (e.g. alignment or new field), this corrupts random memory!\n");
}

int main() {
    printf("========================================================\n");
    printf("               C COUPLING PUZZLE DEMO                  \n");
    printf("========================================================\n\n");

    // 1. Data Coupling
    printf("[1. Data Coupling]\n");
    double tax = calc_tax_c(1000.0, 0.10);
    printf("   Tax calculated: %.2f\n", tax);
    printf("   SAFE/VALID: Inputs are pure values, zero side-effects.\n\n");

    // 2. Stamp Coupling
    AccountC acc = {101, "Alice", 2500.50, {0}};
    print_balance_c(&acc);

    // 3. Bundling Coupling
    LoggerC logger = { log_info_impl, log_error_impl };
    process_data_c(&logger);

    // 4. Control Coupling
    process_user_c(42, 1);

    // 5. Hybrid Coupling
    CommandPacketC pkt = {1, 42, "Bob"};
    handle_packet_c(pkt);

    // 6. Common Coupling
    printf("[6. Common/Global Coupling]\n");
    module_a_c();
    module_b_c();
    printf("   DANGER: Global state leads to race conditions and untraceable bugs.\n\n");

    // 7. Content Coupling
    printf("[7. Content Coupling (Memory Hack)]\n");
    InternalDataC internal_data = {10, 42};
    hack_content_c(&internal_data);
    printf("\n========================================================\n");

    return 0;
}

```

---

#### 2. C++ (`coupling_examples.cpp`)

```cpp
#include <iostream>
#include <string>

// --- 1. Data Coupling ---
double calc_tax_cpp(double price, double rate) {
    return price * rate;
}

// --- 2. Stamp Coupling ---
struct AccountCpp {
    int id;
    std::string name;
    double balance;
    char unused_padding[2048];
};

void print_balance_cpp(const AccountCpp& acc) {
    std::cout << "[2. Stamp Coupling]\n";
    std::cout << "   Received struct size: " << sizeof(AccountCpp) << " bytes.\n";
    std::cout << "   Used field: balance = " << acc.balance << "\n";
    std::cout << "   RISK: Tight coupling to unused data fields & memory bloat.\n\n";
}

// --- 3. Bundling Coupling ---
class LoggerCpp {
public:
    void info(const std::string& msg) { std::cout << "   [INFO] " << msg << "\n"; }
    void error(const std::string& msg) { std::cerr << "   [ERROR] " << msg << "\n"; }
};

class ProcessorCpp {
    LoggerCpp& logger;
public:
    ProcessorCpp(LoggerCpp& log) : logger(log) {}
    void run() {
        std::cout << "[3. Bundling Coupling]\n";
        logger.info("Processor executing. Entire LoggerCpp interface exposed.");
        std::cout << "\n";
    }
};

// --- 4. Control Coupling ---
enum class UserRole { Admin, Standard };

void process_user_cpp(int user_id, UserRole role) {
    std::cout << "[4. Control Coupling]\n";
    if (role == UserRole::Admin) {
        std::cout << "   -> Executing Admin branch for ID " << user_id << "\n";
    } else {
        std::cout << "   -> Executing Standard branch for ID " << user_id << "\n";
    }
    std::cout << "   RISK: Caller controls callee's execution flow via flags.\n\n";
}

// --- 5. Hybrid Coupling ---
struct UserCommandCpp {
    std::string action; // "CREATE", "DELETE"
    int user_id;
    std::string payload;
};

void handle_command_cpp(const UserCommandCpp& cmd) {
    std::cout << "[5. Hybrid Coupling]\n";
    std::cout << "   Packet Action Directive: '" << cmd.action << "'\n";
    if (cmd.action == "CREATE") {
        std::cout << "   -> Branch 'CREATE' triggered for " << cmd.payload << "\n";
    }
    std::cout << "   RISK: Data structure encapsulates both logic flags and data.\n\n";
}

// --- 6. Common Coupling ---
static int g_config_flags = 0;

void update_config_cpp(int flag) {
    g_config_flags |= flag;
    std::cout << "   [Module A] Modified static global g_config_flags = " << g_config_flags << "\n";
}

void apply_config_cpp() {
    std::cout << "   [Module B] Reading global state: " << g_config_flags << "\n";
    if (g_config_flags & 0x01) {
        std::cout << "   -> Feature 0x01 enabled via shared global state!\n";
    }
}

// --- 7. Content Coupling ---
class SecretStoreCpp {
private:
    int secret_key = 1234;
    friend void malicious_hacker(SecretStoreCpp& store);
public:
    int get_secret() const { return secret_key; }
};

void malicious_hacker(SecretStoreCpp& store) {
    std::cout << "   Before friend bypass: secret_key = " << store.get_secret() << "\n";
    store.secret_key = 9999; // friendキーワードによりカプセル化を突破
    std::cout << "   After friend bypass : secret_key = " << store.get_secret() << "\n";
    std::cout << "   CRITICAL DANGER: Encapsulation completely broken via 'friend' keyword!\n";
}

int main() {
    std::cout << "========================================================\n";
    std::cout << "              C++ COUPLING PUZZLE DEMO                 \n";
    std::cout << "========================================================\n\n";

    // 1. Data Coupling
    std::cout << "[1. Data Coupling]\n";
    std::cout << "   Tax calculated: " << calc_tax_cpp(1000.0, 0.10) << "\n";
    std::cout << "   VALID: Minimal dependency, fully decoupled.\n\n";

    // 2. Stamp Coupling
    AccountCpp acc{101, "Alice", 2500.50, {0}};
    print_balance_cpp(acc);

    // 3. Bundling Coupling
    LoggerCpp logger;
    ProcessorCpp proc(logger);
    proc.run();

    // 4. Control Coupling
    process_user_cpp(42, UserRole::Admin);

    // 5. Hybrid Coupling
    UserCommandCpp cmd{"CREATE", 42, "Bob"};
    handle_command_cpp(cmd);

    // 6. Common Coupling
    std::cout << "[6. Common Coupling]\n";
    update_config_cpp(0x01);
    apply_config_cpp();
    std::cout << "   DANGER: Shared static variables introduce hidden side-effects.\n\n";

    // 7. Content Coupling
    std::cout << "[7. Content Coupling]\n";
    SecretStoreCpp store;
    malicious_hacker(store);

    std::cout << "\n========================================================\n";
    return 0;
}

```

---

#### 3. Python (`coupling_examples.py`)

```python
import sys

# === Python Coupling Puzzle Demo ===

# --- 1. Data Coupling ---
def calc_tax_py(price: float, rate: float) -> float:
    return price * rate

# --- 2. Stamp Coupling ---
class AccountPy:
    def __init__(self, acc_id: int, name: str, balance: float):
        self.id = acc_id
        self.name = name
        self.balance = balance
        self.large_metadata = [0] * 10000 # 不要なメモリ領域のシミュレーション

def print_balance_py(acc: AccountPy):
    print("[2. Stamp Coupling]")
    print(f"   Received object with {sys.getsizeof(acc.large_metadata)} bytes of unused metadata.")
    print(f"   Used property: balance = {acc.balance}")
    print("   RISK: Unnecessary dependency on entire AccountPy object.\n")

# --- 3. Bundling Coupling ---
class LoggerPy:
    def info(self, msg: str):
        print(f"   [INFO] {msg}")

def process_data_py(logger: LoggerPy):
    print("[3. Bundling Coupling]")
    logger.info("Processing data using entire Logger object.")
    print("   RISK: High module coupling to Logger implementation.\n")

# --- 4. Control Coupling ---
def process_user_py(user_id: int, is_admin: bool = False):
    print("[4. Control Coupling]")
    print(f"   Caller passed flag 'is_admin={is_admin}'")
    if is_admin:
        print(f"   -> Executing Admin privileged flow for user {user_id}")
    else:
        print(f"   -> Executing Standard flow for user {user_id}")
    print("   RISK: Function behavior is controlled by caller flag.\n")

# --- 5. Hybrid Coupling ---
def handle_request_py(request: dict):
    print("[5. Hybrid Coupling]")
    action = request.get("action")
    data = request.get("payload")
    print(f"   Embedded Directive: '{action}', Data: '{data}'")
    if action == "SAVE":
        print(f"   -> Handled SAVE logic for {data}")
    print("   RISK: Control codes and data payload mixed in single structure.\n")

# --- 6. Common Coupling ---
shared_config = {"debug_mode": False}

def enable_debug_py():
    global shared_config
    shared_config["debug_mode"] = True
    print("   [Module A] Silently modified global shared_config['debug_mode'] = True")

def run_app_py():
    print(f"   [Module B] Reading shared_config['debug_mode']: {shared_config['debug_mode']}")
    if shared_config["debug_mode"]:
        print("   -> Execution changed: Running app in DEBUG mode due to global state!")

# --- 7. Content Coupling ---
class SecretStorePy:
    def __init__(self):
        self.__secret_key = 42 # Name Mangling によるプライベート変数

def main():
    print("========================================================")
    print("             PYTHON COUPLING PUZZLE DEMO                ")
    print("========================================================\n")

    # 1. Data Coupling
    print("[1. Data Coupling]")
    tax = calc_tax_py(1000.0, 0.10)
    print(f"   Tax calculated: {tax}")
    print("   VALID: Pure arguments, immutable primitives.\n")

    # 2. Stamp Coupling
    acc = AccountPy(101, "Alice", 2500.50)
    print_balance_py(acc)

    # 3. Bundling Coupling
    logger = LoggerPy()
    process_data_py(logger)

    # 4. Control Coupling
    process_user_py(42, is_admin=True)

    # 5. Hybrid Coupling
    handle_request_py({"action": "SAVE", "payload": "UserData_42"})

    # 6. Common Coupling
    print("[6. Common Coupling]")
    enable_debug_py()
    run_app_py()
    print("   DANGER: Global dictionary state introduces un-trackable side-effects.\n")

    # 7. Content Coupling
    print("[7. Content Coupling]")
    store = SecretStorePy()
    print("   Attempting to bypass private attribute encapsulation...")
    print(f"   Before attack: _SecretStorePy__secret_key = {store._SecretStorePy__secret_key}")
    store._SecretStorePy__secret_key = 9999
    print(f"   After attack : _SecretStorePy__secret_key = {store._SecretStorePy__secret_key}")
    print("   CRITICAL DANGER: Python Name Mangling bypassed! Internal class state violated.")

    print("\n========================================================")

if __name__ == "__main__":
    main()

```

---

#### 4. Rust (`coupling_examples.rs`)

```rust
// === Rust Coupling Puzzle Demo ===

// --- 1. Data Coupling ---
fn calc_tax_rs(price: f64, rate: f64) -> f64 {
    price * rate
}

// --- 2. Stamp Coupling ---
struct AccountRs {
    id: u64,
    name: String,
    balance: f64,
    unused_padding: [u8; 1024],
}

fn print_balance_rs(acc: &AccountRs) {
    println!("[2. Stamp Coupling]");
    println!("   Received struct size: {} bytes", std::mem::size_of::<AccountRs>());
    println!("   Used field: balance = {:.2}", acc.balance);
    println!("   RISK: Unnecessary struct dependency and size bloat.\n");
}

// --- 3. Bundling Coupling ---
struct LoggerRs;
impl LoggerRs {
    fn info(&self, msg: &str) {
        println!("   [INFO] {}", msg);
    }
}

struct ProcessorRs<'a> {
    logger: &'a LoggerRs,
}
impl<'a> ProcessorRs<'a> {
    fn run(&self) {
        println!("[3. Bundling Coupling]");
        self.logger.info("Processor running with direct Logger dependence.");
        println!("\n");
    }
}

// --- 4. Control Coupling ---
enum Mode { Admin, User }

fn process_user_rs(user_id: u64, mode: Mode) {
    println!("[4. Control Coupling]");
    match mode {
        Mode::Admin => println!("   -> Executing Admin logic branch for ID {}", user_id),
        Mode::User => println!("   -> Executing Standard logic branch for ID {}", user_id),
    }
    println!("   RISK: Control flag forces internal branching logic.\n");
}

// --- 5. Hybrid Coupling ---
struct RequestPacketRs {
    command_code: u8, // 0x01: SAVE, 0xFF: PURGE
    payload: String,
}

fn handle_request_rs(req: RequestPacketRs) {
    println!("[5. Hybrid Coupling]");
    println!("   Received Command Code: {:#04x}", req.command_code);
    match req.command_code {
        0x01 => println!("   -> Executing SAVE handler for payload: {}", req.payload),
        0xFF => println!("   -> Executing PURGE handler for payload: {}", req.payload),
        _ => {},
    }
    println!("   RISK: Control logic code embedded directly within data packet.\n");
}

// --- 6. Common Coupling ---
static mut GLOBAL_STATE: i32 = 0;

fn update_state_rs() {
    unsafe {
        GLOBAL_STATE = 10;
        println!("   [Module A] Updated static mut GLOBAL_STATE = {}", GLOBAL_STATE);
    }
}

fn read_state_rs() {
    unsafe {
        println!("   [Module B] Reading static mut GLOBAL_STATE = {}", GLOBAL_STATE);
        if GLOBAL_STATE == 10 {
            println!("   -> Behavior modified by un-tracked global state!");
        }
    }
}

// --- 7. Content Coupling ---
mod private_module {
    pub struct SecretStoreRs {
        pub public_field: u32,
        secret_field: u32, // プライベートフィールド
    }
    impl SecretStoreRs {
        pub fn new() -> Self {
            Self { public_field: 1, secret_field: 42 }
        }
        pub fn get_secret(&self) -> u32 {
            self.secret_field
        }
    }
}

fn hack_content_rs(store: &mut private_module::SecretStoreRs) {
    println!("   Before raw pointer hack: secret_field = {}", store.get_secret());
    
    // unsafeと生ポインタのオフセットでカプセル化を破壊
    let ptr = store as *mut _ as *mut u32;
    unsafe {
        *ptr.offset(1) = 9999;
    }
    
    println!("   After raw pointer hack : secret_field = {}", store.get_secret());
    println!("   CRITICAL DANGER: Safe Rust encapsulation destroyed via raw pointer offset!");
    println!("   This causes Undefined Behavior (UB) and breaks Rust memory safety guarantees.");
}

fn main() {
    println!("========================================================");
    println!("              RUST COUPLING PUZZLE DEMO                 ");
    println!("========================================================\n");

    // 1. Data Coupling
    println!("[1. Data Coupling]");
    let tax = calc_tax_rs(1000.0, 0.10);
    println!("   Tax calculated: {:.2}", tax);
    println!("   VALID: Clean parameter passing, 100% memory safe.\n");

    // 2. Stamp Coupling
    let acc = AccountRs { id: 101, name: String::from("Alice"), balance: 2500.50, unused_padding: [0; 1024] };
    print_balance_rs(&acc);

    // 3. Bundling Coupling
    let logger = LoggerRs;
    let proc = ProcessorRs { logger: &logger };
    proc.run();

    // 4. Control Coupling
    process_user_rs(42, Mode::Admin);

    // 5. Hybrid Coupling
    let req = RequestPacketRs { command_code: 0x01, payload: String::from("UserData_42") };
    handle_request_rs(req);

    // 6. Common Coupling
    println!("[6. Common Coupling]");
    update_state_rs();
    read_state_rs();
    println!("   DANGER: static mut requires 'unsafe' and causes data races in multi-threading.\n");

    // 7. Content Coupling
    println!("[7. Content Coupling]");
    let mut store = private_module::SecretStoreRs::new();
    hack_content_rs(&mut store);

    println!("\n========================================================");
}

```

## C Result
========================================================
               C COUPLING PUZZLE DEMO                  
========================================================

[1. Data Coupling]
   Tax calculated: 100.00
   SAFE/VALID: Inputs are pure values, zero side-effects.

[2. Stamp Coupling]
   Passes 1088 bytes struct when only 8 bytes (double balance) is used!
   Balance: 2500.50

[3. Bundling Coupling]
   Module depends on entire LoggerC struct/vtable.
   [INFO] Data processing started.

[4. Control Coupling]
   Caller passes flag 'is_admin=1' to force internal logic branch.
   -> Branch executed: Admin privileges granted for user 42

[5. Hybrid Coupling]
   Data payload contains embedded control code (cmd=1).
   -> Interpreted Action: CREATE for Bob (ID: 42)

[6. Common/Global Coupling]
   [Module A] Silently modified global g_system_state -> 1
   [Module B] Reads global g_system_state: 1
   -> DANGER: Behavior changed due to invisible side-effect from another module!
   DANGER: Global state leads to race conditions and untraceable bugs.

[7. Content Coupling (Memory Hack)]
   Before attack: public_val=10, internal_secret=42
   After attack : public_val=10, internal_secret=9999
   CRITICAL DANGER: Memory offset calculation (data + 1) directly mutated internal struct member!
   If struct layout changes (e.g. alignment or new field), this corrupts random memory!

=======
