TEMPREG 0x200 PERMREG 0x400 PREMREG 0xc00
yacc  -d ./cgram.y
make[2]: yacc: No such file or directory
make[2]: *** [Makefile:101: cgram.c] Error 127
make[2]: Leaving directory '/pcc/cc/ccom'
make[1]: *** [Makefile:12: all] Error 2
make[1]: Leaving directory '/pcc/cc'
make: *** [Makefile:12: all] Error 2

apt update; apt -y upgrade; apt install bison flex build-essential

gcc  -g -O2  -Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow -Wsign-compare -D_DEFAULT_SOURCE -DGCC_COMPAT -DPCC_DEBUG -D_ISOC99_SOURCE -Dos_linux -Dmach_amd64 -I. -I. -I../.. -I../../mip -I../../arch/amd64 -I../../os/linux -I../../common -c -o regs.o ../../mip/regs.c
:  ./scan.l
mv -f .c scan.c
mv: cannot stat '.c': No such file or directory
make[2]: *** [Makefile:107: scan.c] Error 1
make[2]: Leaving directory '/pcc/cc/ccom'
make[1]: *** [Makefile:12: all] Error 2
make[1]: Leaving directory '/pcc/cc'
make: *** [Makefile:12: all] Error 2
root@5180102b76af /pcc [frosty_lalande]

