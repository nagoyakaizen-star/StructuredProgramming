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

# やってみた

root@3e9fa92ccab7:/home/source/pcc# apt install byacc
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
The following NEW packages will be installed:
  byacc
0 upgraded, 1 newly installed, 0 to remove and 0 not upgraded.
Need to get 85.5 kB of archives.
After this operation, 219 kB of additional disk space will be used.
Get:1 http://archive.ubuntu.com/ubuntu noble/universe amd64 byacc amd64 1:2.0.20221106-1 [85.5 kB]
Fetched 85.5 kB in 0s (237 kB/s)
debconf: delaying package configuration, since apt-utils is not installed
Selecting previously unselected package byacc.
(Reading database ... 16182 files and directories currently installed.)
Preparing to unpack .../byacc_1%3a2.0.20221106-1_amd64.deb ...
Unpacking byacc (1:2.0.20221106-1) ...
Setting up byacc (1:2.0.20221106-1) ...
root@3e9fa92ccab7:/home/source/pcc# pwd
/home/source/pcc
root@3e9fa92ccab7:/home/source/pcc# make clean
===> cc
make[1]: Entering directory '/home/source/pcc/cc'
===> cc/cc
make[2]: Entering directory '/home/source/pcc/cc/cc'
rm -f  cc.o compat.o strlist.o xalloc.o cc
make[2]: Leaving directory '/home/source/pcc/cc/cc'
<=== cc/cc
===> cc/cpp
make[2]: Entering directory '/home/source/pcc/cc/cpp'
rm -f compat.o cpp.o cpc.o token.o cpp tests/run*
make[2]: Leaving directory '/home/source/pcc/cc/cpp'
<=== cc/cpp
===> cc/ccom
make[2]: Entering directory '/home/source/pcc/cc/ccom'
rm -f ccom builtins.o cgram.o code.o common.o compat.o complex.o dwarf.o external.o gcc_compat.o init.o inline.o local.o main.o optim.o params.o pftn.o softfloat.o scan.o stabs.o symtabs.o trees.o unicode.o common2.o compat.o external.o local2.o main2.o match.o optim2.o order.o reader.o regs.o table.o mkext mkext.lo common.lo table.lo cc2 \
.c scan.c y.tab.[ch] cgram.[ch] external.[ch]
make[2]: Leaving directory '/home/source/pcc/cc/ccom'
<=== cc/ccom
===> cc/cxxcom
make[2]: Entering directory '/home/source/pcc/cc/cxxcom'
rm -f cxxcom builtins.o cgram.o code.o common.o compat.o external.o gcc_compat.o init.o inline.o local.o local2.o main.o cxxcode.o match.o optim.o optim2.o order.o pftn.o reader.o regs.o scan.o stabs.o symtabs.o table.o trees.o mkext mkext.lo common.lo table.lo .c        \
    scan.c y.tab.[ch] cgram.[ch] external.[ch]
make[2]: Leaving directory '/home/source/pcc/cc/cxxcom'
<=== cc/cxxcom
make[1]: Leaving directory '/home/source/pcc/cc'
<=== cc
root@3e9fa92ccab7:/home/source/pcc# CFLAGS="-w" ./configure
checking build system type... x86_64-pc-linux-gnu
checking host system type... x86_64-pc-linux-gnu
checking target system type... x86_64-pc-linux-gnu
checking for gcc... gcc
checking whether the C compiler works... yes
checking for C compiler default output file name... a.out
checking for suffix of executables...
checking whether we are cross compiling... no
checking for suffix of object files... o
checking whether the compiler supports GNU C... yes
checking whether gcc accepts -g... yes
checking for gcc option to enable C11 features... none needed
checking whether gcc accepts -Wall... yes
checking whether gcc accepts -Wmissing-prototypes... yes
checking whether gcc accepts -Wstrict-prototypes... yes
checking whether gcc accepts -Wshadow... yes
checking whether gcc accepts -Wsign-compare... yes
checking whether gcc accepts -Wtruncate... no
checking for a C compiler for mkext... not cross compiling
checking for stdio.h... yes
checking for stdlib.h... yes
checking for string.h... yes
checking for inttypes.h... yes
checking for stdint.h... yes
checking for strings.h... yes
checking for sys/stat.h... yes
checking for sys/types.h... yes
checking for unistd.h... yes
checking for C99 printf size specifiers... yes
checking size of int *... 8
checking whether byte ordering is bigendian... no
checking whether make sets $(MAKE)... yes
checking for a BSD-compatible install... /usr/bin/install -c
checking for bison... bison -y
checking for flex... flex
checking for lex output file root... lex.yy
checking for lex library... none needed
checking for library containing yywrap... -ll
checking whether yytext is a pointer... yes
checking for string.h... (cached) yes
checking for math.h... yes
checking for sys/wait.h that is POSIX.1 compatible... yes
checking for strtold... yes
checking for vsnprintf... yes
checking for snprintf... yes
checking for mkstemp... yes
checking for strlcat... yes
checking for strlcpy... yes
checking for getopt... yes
checking for ffs... yes
checking for vfork... yes
checking for size_t... yes
checking for working alloca.h... yes
checking for alloca... yes
checking for lroundl in -lm... yes
checking for lroundl... yes
configure: creating ./config.status
config.status: creating Makefile
config.status: creating cc/Makefile
config.status: creating cc/cc/Makefile
config.status: creating cc/cpp/Makefile
config.status: creating cc/ccom/Makefile
config.status: creating cc/cxxcom/Makefile
config.status: creating cc/driver/Makefile
config.status: creating f77/Makefile
config.status: creating f77/f77/Makefile
config.status: creating f77/fcom/Makefile
config.status: creating config.h

Target CPU is .................... amd64
Target ABI is .................... elf
Target OS is ..................... linux
Compiler is called ............... pcc
Installing compiler into ......... /usr/local/bin
Installing pre-processor into .... /usr/local/libexec
Using assembler .................. <default>
Using linker ..................... <default>
Using Multi-Arch path ............ "x86_64-linux-gnu"
Using include path ............... <default>
Using library path ............... <default>
Use libvmf ....................... no
Has TLS support .................. no
Has GCC compatibility ............ yes
Has PCC debugging ................ yes
Type of wchar_t is ............... INT (4 chars)

Configure finished.  Do 'make && make install' to compile and install.

root@3e9fa92ccab7:/home/source/pcc# make
===> cc
make[1]: Entering directory '/home/source/pcc/cc'
===> cc/cc
make[2]: Entering directory '/home/source/pcc/cc/cc'
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -DLIBEXECDIR=\"/usr/local/libexec/\" -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -DINCLUDEDIR=\"/usr/local/include/\" -DPCCINCDIR=\"/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/include/\" -DPCCLIBDIR=\"/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/lib/\" -Dos_linux -Dmach_amd64 -DTARGOSVER=0 -DCXXPROGNAME=\"p++\" -DCPPROGNAME=\"pcpp\" -DCC0=\"cc0\" -DCC1=\"cc1\" -I../../cc/driver -I../.. -I../../os/linux -I../../mip -I../../arch/amd64 -I../../common -c -o cc.o ./cc.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -DLIBEXECDIR=\"/usr/local/libexec/\" -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -DINCLUDEDIR=\"/usr/local/include/\" -DPCCINCDIR=\"/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/include/\" -DPCCLIBDIR=\"/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/lib/\" -Dos_linux -Dmach_amd64 -DTARGOSVER=0 -DCXXPROGNAME=\"p++\" -DCPPROGNAME=\"pcpp\" -DCC0=\"cc0\" -DCC1=\"cc1\" -I../../cc/driver -I../.. -I../../os/linux -I../../mip -I../../arch/amd64 -I../../common -c -o compat.o ../../common/compat.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -DLIBEXECDIR=\"/usr/local/libexec/\" -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -DINCLUDEDIR=\"/usr/local/include/\" -DPCCINCDIR=\"/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/include/\" -DPCCLIBDIR=\"/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/lib/\" -Dos_linux -Dmach_amd64 -DTARGOSVER=0 -DCXXPROGNAME=\"p++\" -DCPPROGNAME=\"pcpp\" -DCC0=\"cc0\" -DCC1=\"cc1\" -I../../cc/driver -I../.. -I../../os/linux -I../../mip -I../../arch/amd64 -I../../common -c -o strlist.o ../../cc/driver/strlist.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -DLIBEXECDIR=\"/usr/local/libexec/\" -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -DINCLUDEDIR=\"/usr/local/include/\" -DPCCINCDIR=\"/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/include/\" -DPCCLIBDIR=\"/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/lib/\" -Dos_linux -Dmach_amd64 -DTARGOSVER=0 -DCXXPROGNAME=\"p++\" -DCPPROGNAME=\"pcpp\" -DCC0=\"cc0\" -DCC1=\"cc1\" -I../../cc/driver -I../.. -I../../os/linux -I../../mip -I../../arch/amd64 -I../../common -c -o xalloc.o ../../cc/driver/xalloc.c
gcc  cc.o compat.o strlist.o xalloc.o -o cc -lm
make[2]: Leaving directory '/home/source/pcc/cc/cc'
<=== cc/cc
===> cc/cpp
make[2]: Entering directory '/home/source/pcc/cc/cpp'
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -I. -I../.. -I. -I../../mip -I../../arch/amd64 -I../../common -DNVMPGS=4 -c -o compat.o ../../common/compat.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -I. -I../.. -I. -I../../mip -I../../arch/amd64 -I../../common -DNVMPGS=4 -c -o cpp.o ./cpp.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -I. -I../.. -I. -I../../mip -I../../arch/amd64 -I../../common -DNVMPGS=4 -c -o cpc.o ./cpc.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -I. -I../.. -I. -I../../mip -I../../arch/amd64 -I../../common -DNVMPGS=4 -c -o token.o ./token.c
gcc  compat.o cpp.o cpc.o token.o -o cpp -lm
make[2]: Leaving directory '/home/source/pcc/cc/cpp'
<=== cc/cpp
===> cc/ccom
make[2]: Entering directory '/home/source/pcc/cc/ccom'
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -DMKEXT -c -o mkext.lo ../../mip/mkext.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -DMKEXT -c -o common.lo ../../mip/common.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -DMKEXT -c -o table.lo ../../arch/amd64/table.c
gcc  mkext.lo common.lo table.lo -o mkext -lm
./mkext
TEMPREG 0x200 PERMREG 0x400 PREMREG 0xc00
bison -y  -d ./cgram.y
./cgram.y: warning: 6 shift/reduce conflicts [-Wconflicts-sr]
./cgram.y: note: rerun with option '-Wcounterexamples' to generate conflict counterexamples
mv -f y.tab.c cgram.c
mv -f y.tab.h cgram.h
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o builtins.o ./builtins.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o cgram.o cgram.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o code.o ../../arch/amd64/code.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o common.o ../../mip/common.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o compat.o ../../common/compat.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o complex.o ./complex.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o dwarf.o ./dwarf.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o external.o external.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o gcc_compat.o ./gcc_compat.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o init.o ./init.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o inline.o ./inline.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o local.o ../../arch/amd64/local.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o local2.o ../../arch/amd64/local2.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o main.o ./main.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o match.o ../../mip/match.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o optim.o ./optim.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o optim2.o ../../mip/optim2.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o order.o ../../arch/amd64/order.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o params.o ./params.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o pftn.o ./pftn.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o reader.o ../../mip/reader.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o softfloat.o ../../common/softfloat.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o regs.o ../../mip/regs.c
flex  ./scan.l
mv -f lex.yy.c scan.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o scan.o scan.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o stabs.o ./stabs.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o symtabs.o ./symtabs.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o table.o ../../arch/amd64/table.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o trees.o ./trees.c
gcc  -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o unicode.o ../../common/unicode.c
gcc  builtins.o cgram.o code.o common.o compat.o complex.o dwarf.o external.o gcc_compat.o init.o inline.o local.o local2.o main.o match.o optim.o optim2.o order.o params.o pftn.o reader.o softfloat.o regs.o scan.o stabs.o symtabs.o table.o trees.o unicode.o -o ccom -lm
make[2]: Leaving directory '/home/source/pcc/cc/ccom'
<=== cc/ccom
===> cc/cxxcom
make[2]: Entering directory '/home/source/pcc/cc/cxxcom'
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -DMKEXT -c -o mkext.lo ../../mip/mkext.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -DMKEXT -c -o common.lo ../../mip/common.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -DMKEXT -c -o table.lo ../../arch/amd64/table.c
gcc  mkext.lo common.lo table.lo -o mkext -lm
./mkext
TEMPREG 0x200 PERMREG 0x400 PREMREG 0xc00
bison -y  -d ./cgram.y
./cgram.y:252.24-31: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  252 | %type <strp>    string C_STRING GCC_DESIG nsname CXX_MORENM
      |                        ^~~~~~~~
./cgram.y:252.33-41: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  252 | %type <strp>    string C_STRING GCC_DESIG nsname CXX_MORENM
      |                                 ^~~~~~~~~
./cgram.y:252.50-59: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  252 | %type <strp>    string C_STRING GCC_DESIG nsname CXX_MORENM
      |                                                  ^~~~~~~~~~
./cgram.y:256.17-24: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  256 | %type <intval>  C_STRUCT C_RELOP C_DIVOP C_SHIFTOP
      |                 ^~~~~~~~
./cgram.y:256.26-32: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  256 | %type <intval>  C_STRUCT C_RELOP C_DIVOP C_SHIFTOP
      |                          ^~~~~~~
./cgram.y:256.34-40: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  256 | %type <intval>  C_STRUCT C_RELOP C_DIVOP C_SHIFTOP
      |                                  ^~~~~~~
./cgram.y:256.42-50: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  256 | %type <intval>  C_STRUCT C_RELOP C_DIVOP C_SHIFTOP
      |                                          ^~~~~~~~~
./cgram.y:257.17-24: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  257 |                 C_ANDAND C_OROR C_STROP C_INCOP C_UNOP C_ASOP C_EQUOP
      |                 ^~~~~~~~
./cgram.y:257.26-31: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  257 |                 C_ANDAND C_OROR C_STROP C_INCOP C_UNOP C_ASOP C_EQUOP
      |                          ^~~~~~
./cgram.y:257.33-39: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  257 |                 C_ANDAND C_OROR C_STROP C_INCOP C_UNOP C_ASOP C_EQUOP
      |                                 ^~~~~~~
./cgram.y:257.41-47: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  257 |                 C_ANDAND C_OROR C_STROP C_INCOP C_UNOP C_ASOP C_EQUOP
      |                                         ^~~~~~~
./cgram.y:257.49-54: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  257 |                 C_ANDAND C_OROR C_STROP C_INCOP C_UNOP C_ASOP C_EQUOP
      |                                                 ^~~~~~
./cgram.y:257.56-61: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  257 |                 C_ANDAND C_OROR C_STROP C_INCOP C_UNOP C_ASOP C_EQUOP
      |                                                        ^~~~~~
./cgram.y:257.63-69: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  257 |                 C_ANDAND C_OROR C_STROP C_INCOP C_UNOP C_ASOP C_EQUOP
      |                                                               ^~~~~~~
./cgram.y:259.17-22: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  259 | %type <nodep>   C_TYPE C_QUALIFIER C_ICON C_FCON C_CLASS
      |                 ^~~~~~
./cgram.y:259.24-34: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  259 | %type <nodep>   C_TYPE C_QUALIFIER C_ICON C_FCON C_CLASS
      |                        ^~~~~~~~~~~
./cgram.y:259.36-41: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  259 | %type <nodep>   C_TYPE C_QUALIFIER C_ICON C_FCON C_CLASS
      |                                    ^~~~~~
./cgram.y:259.43-48: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  259 | %type <nodep>   C_TYPE C_QUALIFIER C_ICON C_FCON C_CLASS
      |                                           ^~~~~~
./cgram.y:259.50-56: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  259 | %type <nodep>   C_TYPE C_QUALIFIER C_ICON C_FCON C_CLASS
      |                                                  ^~~~~~~
./cgram.y:260.17-22: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  260 | %type <strp>    C_NAME C_TYPENAME
      |                 ^~~~~~
./cgram.y:260.24-33: warning: POSIX yacc reserves %type to nonterminals [-Wyacc]
  260 | %type <strp>    C_NAME C_TYPENAME
      |                        ^~~~~~~~~~
./cgram.y: warning: 4 shift/reduce conflicts [-Wconflicts-sr]
./cgram.y: note: rerun with option '-Wcounterexamples' to generate conflict counterexamples
mv -f y.tab.c cgram.c
mv -f y.tab.h cgram.h
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o builtins.o ./builtins.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o cgram.o cgram.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o code.o ../../arch/amd64/code.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o common.o ../../mip/common.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o compat.o ../../common/compat.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o external.o external.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o gcc_compat.o ./gcc_compat.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o init.o ./init.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o inline.o ./inline.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o local.o ../../arch/amd64/local.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o local2.o ../../arch/amd64/local2.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o main.o ./main.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o cxxcode.o ./cxxcode.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o match.o ../../mip/match.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o optim.o ./optim.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o optim2.o ../../mip/optim2.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o order.o ../../arch/amd64/order.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o pftn.o ./pftn.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o reader.o ../../mip/reader.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o regs.o ../../mip/regs.c
flex  ./scan.l
mv -f lex.yy.c scan.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o scan.o scan.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o stabs.o ./stabs.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o symtabs.o ./symtabs.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o table.o ../../arch/amd64/table.c
gcc -w  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -DLANG_CXX -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o trees.o ./trees.c
gcc  builtins.o cgram.o code.o common.o compat.o external.o gcc_compat.o init.o inline.o local.o local2.o main.o cxxcode.o match.o optim.o optim2.o order.o pftn.o reader.o regs.o scan.o stabs.o symtabs.o table.o trees.o -o cxxcom -lm
make[2]: Leaving directory '/home/source/pcc/cc/cxxcom'
<=== cc/cxxcom
make[1]: Leaving directory '/home/source/pcc/cc'
<=== cc
root@3e9fa92ccab7:/home/source/pcc# make install
===> cc
make[1]: Entering directory '/home/source/pcc/cc'
===> cc/cc
make[2]: Entering directory '/home/source/pcc/cc/cc'
test -z "/usr/local/bin" || mkdir -p "/usr/local/bin"
test -z "/usr/local/share/man/man1" || mkdir -p "/usr/local/share/man/man1"
test -z "/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/include" || mkdir -p "/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/include"
test -z "/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/lib" || mkdir -p "/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/lib"
make[2]: Leaving directory '/home/source/pcc/cc/cc'
<=== cc/cc
===> cc/cpp
make[2]: Entering directory '/home/source/pcc/cc/cpp'
test -z "/usr/local/libexec" || mkdir -p "/usr/local/libexec"
/usr/bin/install -c -s cpp /usr/local/libexec
test -z "/usr/local/share/man/man1" || mkdir -p "/usr/local/share/man/man1"
/usr/bin/install -c -m 644 ./cpp.1 /usr/local/share/man/man1/cpp.1
make[2]: Leaving directory '/home/source/pcc/cc/cpp'
<=== cc/cpp
===> cc/ccom
make[2]: Entering directory '/home/source/pcc/cc/ccom'
test -z "/usr/local/libexec" || mkdir -p "/usr/local/libexec"
/usr/bin/install -c -s ccom /usr/local/libexec
test -f cc2 && /usr/bin/install -c -s cc2 /usr/local/libexec
make[2]: [Makefile:227: install] Error 1 (ignored)
test -z "/usr/local/share/man/man1" || mkdir -p "/usr/local/share/man/man1"
/usr/bin/install -c -m 644 ./ccom.1 /usr/local/share/man/man1/ccom.1
make[2]: Leaving directory '/home/source/pcc/cc/ccom'
<=== cc/ccom
===> cc/cxxcom
make[2]: Entering directory '/home/source/pcc/cc/cxxcom'
test -z "/usr/local/libexec" || mkdir -p "/usr/local/libexec"
/usr/bin/install -c -s cxxcom /usr/local/libexec
test -z "/usr/local/share/man/man1" || mkdir -p "/usr/local/share/man/man1"
make[2]: Leaving directory '/home/source/pcc/cc/cxxcom'
<=== cc/cxxcom
make[1]: Leaving directory '/home/source/pcc/cc'
<=== cc
root@3e9fa92ccab7:/home/source/pcc#
