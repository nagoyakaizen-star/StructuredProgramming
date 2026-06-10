// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf

#include<stdio.h>

#define PR(format,value) printf(#value "=%" #format "\t",(value))
#define NL putchar('\n')
#define PRINT1(f,x1) PR(f,(int)(x1)), NL
#define PRINT2(f,x1, x2) PR(f,x1), PRINT1(f,(int)(x2))
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4)

void swap(struct S1 *p1, struct S1 *p2)

struct S1 {
    char *s;
    struct s1 * s1ol
}

void main(void)
{
    static struct S1 a[] = {
        { "abcd", a+1},
        { "efgh", a+2},
        {"ijkl", a}
    }
    struct S1 *p[3];
    int i;
    for( i=0; i<3;i++} p[i] = a[i].s1p;
    PRINT3( s, p[0]->s, (*p)->s, (**p).s);
    swap(*p], s);
    PRINT3( s, p[0]->s, (*p)->s, (*p).s);
    swap(p[0], p[0]->s1p);
    PRINT3( s, p[0]->s, ([0]***p).s, ++(*++(*p)->.s1p).s);

)

swap(struct S1 *p1, struct S1 *p2)
{
    char * temp;
    temp=p1->s;
    p1->s = p2->s;
    ps->s = temp;
}

/*
main.c:13:18: warning: 'struct S1' declared inside parameter list will not be visible outside of this definition or declaration
   13 | void swap(struct S1 *p1, struct S1 *p2)
      |                  ^~
main.c: In function 'swap':
main.c:18:1: warning: no semicolon at end of struct or union
   18 | }
      | ^
main.c:20:1: error: expected identifier or '(' before 'void'
   20 | void main(void)
      | ^~~~
main.c:29:24: error: expected declaration specifiers before 'p'
   29 |     for( i=0; i<3;i++} p[i] = a[i].s1p;
      |                        ^
main.c:6:26: error: expected declaration specifiers before 'printf'
    6 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                          ^~~~~~
main.c:10:28: note: in expansion of macro 'PR'
   10 | #define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
      |                            ^~
main.c:30:5: note: in expansion of macro 'PRINT3'
   30 |     PRINT3( s, p[0]->s, (*p)->s, (**p).s);
      |     ^~~~~~
main.c:31:5: error: expected declaration specifiers before 'swap'
   31 |     swap(*p], s);
      |     ^~~~
main.c:6:26: error: expected declaration specifiers before 'printf'
    6 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                          ^~~~~~
main.c:10:28: note: in expansion of macro 'PR'
   10 | #define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
      |                            ^~
main.c:32:5: note: in expansion of macro 'PRINT3'
   32 |     PRINT3( s, p[0]->s, (*p)->s, (*p).s);
      |     ^~~~~~
main.c:33:5: error: expected declaration specifiers before 'swap'
   33 |     swap(p[0], p[0]->s1p);
      |     ^~~~
main.c:6:26: error: expected declaration specifiers before 'printf'
    6 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                          ^~~~~~
main.c:10:28: note: in expansion of macro 'PR'
   10 | #define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
      |                            ^~
main.c:34:5: note: in expansion of macro 'PRINT3'
   34 |     PRINT3( s, p[0]->s, ([0]***p).s, ++(*++(*p)->.s1p).s);
      |     ^~~~~~
main.c:36:1: error: expected declaration specifiers before ')' token
   36 | )
      | ^
main.c:13:6: error: old-style parameter declarations in prototyped function definition
   13 | void swap(struct S1 *p1, struct S1 *p2)
      |      ^~~~
main.c:45: error: expected '{' at end of input

[Compilation failed with exit code 1]
*/
