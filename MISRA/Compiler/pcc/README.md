apt update; apt –y upgrade; apt install vim git bison flex build-essential

git clone https://github.com/PortableCC/pcc.git

cd pcc

./configure

 make && make install

root@3e9fa92ccab7:/home/source/pcc# make && make install
===> cc
make[1]: Entering directory '/home/source/pcc/cc'
===> cc/cc
make[2]: Entering directory '/home/source/pcc/cc/cc'
gcc -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -DLIBEXECDIR=\"/usr/local/libexec/\" -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -DINCLUDEDIR=\"/usr/local/include/\" -DPCCINCDIR=\"/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/include/\" -DPCCLIBDIR=\"/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/lib/\" -Dos_linux -Dmach_amd64 -DTARGOSVER=0 -DCXXPROGNAME=\"p++\" -DCPPROGNAME=\"pcpp\" -DCC0=\"cc0\" -DCC1=\"cc1\" -I../../cc/driver -I../.. -I../../os/linux -I../../mip -I../../arch/amd64 -I../../common -c -o cc.o ./cc.c
gcc -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -DLIBEXECDIR=\"/usr/local/libexec/\" -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -DINCLUDEDIR=\"/usr/local/include/\" -DPCCINCDIR=\"/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/include/\" -DPCCLIBDIR=\"/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/lib/\" -Dos_linux -Dmach_amd64 -DTARGOSVER=0 -DCXXPROGNAME=\"p++\" -DCPPROGNAME=\"pcpp\" -DCC0=\"cc0\" -DCC1=\"cc1\" -I../../cc/driver -I../.. -I../../os/linux -I../../mip -I../../arch/amd64 -I../../common -c -o compat.o ../../common/compat.c
gcc -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -DLIBEXECDIR=\"/usr/local/libexec/\" -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -DINCLUDEDIR=\"/usr/local/include/\" -DPCCINCDIR=\"/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/include/\" -DPCCLIBDIR=\"/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/lib/\" -Dos_linux -Dmach_amd64 -DTARGOSVER=0 -DCXXPROGNAME=\"p++\" -DCPPROGNAME=\"pcpp\" -DCC0=\"cc0\" -DCC1=\"cc1\" -I../../cc/driver -I../.. -I../../os/linux -I../../mip -I../../arch/amd64 -I../../common -c -o strlist.o ../../cc/driver/strlist.c
gcc -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -DLIBEXECDIR=\"/usr/local/libexec/\" -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -DINCLUDEDIR=\"/usr/local/include/\" -DPCCINCDIR=\"/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/include/\" -DPCCLIBDIR=\"/usr/local/lib/pcc/x86_64-pc-linux-gnu/1.2.0.DEVEL/lib/\" -Dos_linux -Dmach_amd64 -DTARGOSVER=0 -DCXXPROGNAME=\"p++\" -DCPPROGNAME=\"pcpp\" -DCC0=\"cc0\" -DCC1=\"cc1\" -I../../cc/driver -I../.. -I../../os/linux -I../../mip -I../../arch/amd64 -I../../common -c -o xalloc.o ../../cc/driver/xalloc.c
gcc  cc.o compat.o strlist.o xalloc.o -o cc -lm
make[2]: Leaving directory '/home/source/pcc/cc/cc'
<=== cc/cc
===> cc/cpp
make[2]: Entering directory '/home/source/pcc/cc/cpp'
gcc -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -I. -I../.. -I. -I../../mip -I../../arch/amd64 -I../../common -DNVMPGS=4 -c -o compat.o ../../common/compat.c
gcc -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -I. -I../.. -I. -I../../mip -I../../arch/amd64 -I../../common -DNVMPGS=4 -c -o cpp.o ./cpp.c
gcc -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -I. -I../.. -I. -I../../mip -I../../arch/amd64 -I../../common -DNVMPGS=4 -c -o cpc.o ./cpc.c
gcc -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -I. -I../.. -I. -I../../mip -I../../arch/amd64 -I../../common -DNVMPGS=4 -c -o token.o ./token.c
gcc  compat.o cpp.o cpc.o token.o -o cpp -lm
make[2]: Leaving directory '/home/source/pcc/cc/cpp'
<=== cc/cpp
===> cc/ccom
make[2]: Entering directory '/home/source/pcc/cc/ccom'
gcc -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -DMKEXT -c -o mkext.lo ../../mip/mkext.c
gcc -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -DMKEXT -c -o common.lo ../../mip/common.c
gcc -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -DMKEXT -c -o table.lo ../../arch/amd64/table.c
gcc  mkext.lo common.lo table.lo -o mkext -lm
./mkext
TEMPREG 0x200 PERMREG 0x400 PREMREG 0xc00
yacc  -d ./cgram.y
./cgram.y: warning: 6 shift/reduce conflicts [-Wconflicts-sr]
./cgram.y: note: rerun with option '-Wcounterexamples' to generate conflict counterexamples
mv -f y.tab.c cgram.c
mv -f y.tab.h cgram.h
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o builtins.o ./builtins.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o cgram.o cgram.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o code.o ../../arch/amd64/code.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o common.o ../../mip/common.c
gcc -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o compat.o ../../common/compat.c
gcc -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o complex.o ./complex.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o dwarf.o ./dwarf.c
gcc -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o external.o external.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o gcc_compat.o ./gcc_compat.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o init.o ./init.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o inline.o ./inline.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o local.o ../../arch/amd64/local.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o local2.o ../../arch/amd64/local2.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o main.o ./main.c
./main.c: In function 'segvcatch':
./main.c:70:15: warning: ignoring return value of 'write' declared with attribute 'warn_unused_result' [-Wunused-result]
   70 |         (void)write(STDERR_FILENO, buf, strlen(buf));
      |               ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o match.o ../../mip/match.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o optim.o ./optim.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o optim2.o ../../mip/optim2.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o order.o ../../arch/amd64/order.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o params.o ./params.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o pftn.o ./pftn.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o reader.o ../../mip/reader.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o softfloat.o ../../common/softfloat.c
gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o regs.o ../../mip/regs.c
:  ./scan.l
mv -f .c scan.c
mv: cannot stat '.c': No such file or directory
make[2]: *** [Makefile:107: scan.c] Error 1
make[2]: Leaving directory '/home/source/pcc/cc/ccom'
make[1]: *** [Makefile:12: all] Error 2
make[1]: Leaving directory '/home/source/pcc/cc'
make: *** [Makefile:12: all] Error 2
