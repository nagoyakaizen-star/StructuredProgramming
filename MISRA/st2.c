// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf

#include <stdio.h> 
#define PR(format,value) printf(#value " = %" #format "\t", (value))
#define NL putchar('\n') 
#define PRINT1(f,x1) PR(f,x1), NL 
#define PRINT2(f,x1, x2) PR(f,x1), PRINT1(f,x2) 
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3) 
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4) 

struct S1{
    char *s;
    int i;
    struct S1 *s1p;
};

int main(void){
    static struct S1 a[] = {
        {"abcd", 1, a+1},
        {"efgh", 2, a+2},
        {"ijkl", 3, a}
    };
    struct S1 *p = a;
    int i;
    
//    PRINT3(s, a->s, p->s, a[0].s1p->s);
    PRINT3(s, a[0].s, p->s, a[2].s1p->s);

    for(i = 0; i < 2; i++){
//        PR(d, --a[i].i);
        PR(d, --(a[i].i));    
      PR(s, ++(a[i].s));      
//       PR(c, ++a[i].s[2]);
        NL;
    }
    
   PRINT3(s, ++(p->s), a[(++p)->i].s, a[--(p->s1p->i)].s);
}

/*

a[0].s = abcd   p->s = abcd     a[2].s1p->s = abcd
--(a[i].i) = 0  ++(a[i].s) = bcd
--(a[i].i) = 1  ++(a[i].s) = fgh
++(p->s) = cd   a[(++p)->i].s = fgh     a[--(p->s1p->i)].s = ijkl

*/
