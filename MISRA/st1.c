// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf

#include<stdio.h>
#define PR(format,value) printf(#value "=%" #format "\t",(value))
#define NL putchar('\n')
#define PRINT1(f,x1) PR(f,x1), NL
#define PRINT2(f,x1, x2) PR(f,x1), PRINT1(f,x2)
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4)

int main()
{
    static struct S1{
        char c[4],*s;
    }s1={"abc","def"};
    // s1 ={c[4]="abc", *s="def"}

    static struct S2{
        char *cp;
        struct S1 ss1;
    }s2={"ghi",{"jkl","mno"}};// ,"pqr",{"stu","vwx"}};

    PRINT2(c,s1.c[0],*s1.s);
    //      c, c[0]= 'a', s1.s戦闘番地の中身を出力、左と右は同じ機能
    PRINT2(s,s1.c,s1.s);
    //　　　　出力時はポインタ　左と右は同じ機能

    PRINT2(s,s2.cp,s2.ss1.s);
    // 左と右は類似の機能、２つめは、構造体の後ろのポインタ

    PRINT2(s,++(s2.cp),++(s2.ss1.s));
    PRINT2(s,++s2.cp,++s2.ss1.s);
//    PRINT2(s,++(s2.cp),++(s2.ss1.s));
//    PRINT2(s,(++s2).cp,++s2.ss1.s);
    
    
}
/*
s1.c[0]=a       *s1.s=d
s1.c=abc        s1.s=def
s2.cp=ghi       s2.ss1.s=mno
++(s2.cp)=hi    ++(s2.ss1.s)=no
++s2.cp=i       ++s2.ss1.s=o

[Execution complete with exit code 0]
*?
