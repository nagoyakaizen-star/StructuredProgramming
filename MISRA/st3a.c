// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf

#include<stdio.h>

#define PR(format,value) printf(#value "=%" #format "\t",(value))
#define NL putchar('\n')
#define PRINT1(f,x1) PR(f,(int)(x1)), NL
#define PRINT2(f,x1, x2) PR(f,x1), PRINT1(f,(int)(x2))
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4)


struct S1 {
    char *s;
    struct s1 * s1ol;
};

void swap(struct S1 *p1, struct S1 *p2);


void main(void){
    static struct S1 a[] = {
        { "abcd", a+1},
        { "efgh", a+2},
        {"ijkl", a}
    };
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
main.c: In function 'main':
main.c:24:19: warning: initialization of 'struct s1 *' from incompatible pointer type 'struct S1 *' [-Wincompatible-pointer-types]
   24 |         { "abcd", a+1},
      |                   ^
main.c:24:19: note: (near initialization for 'a[0].s1ol')
main.c:25:19: warning: initialization of 'struct s1 *' from incompatible pointer type 'struct S1 *' [-Wincompatible-pointer-types]
   25 |         { "efgh", a+2},
      |                   ^
main.c:25:19: note: (near initialization for 'a[1].s1ol')
main.c:26:18: warning: initialization of 'struct s1 *' from incompatible pointer type 'struct S1 *' [-Wincompatible-pointer-types]
   26 |         {"ijkl", a}
      |                  ^
main.c:26:18: note: (near initialization for 'a[2].s1ol')
main.c:30:22: error: expected ')' before '}' token
   30 |     for( i=0; i<3;i++} p[i] = a[i].s1p;
      |        ~             ^
      |                      )
main.c:30:22: error: expected expression before '}' token
main.c: At top level:
main.c:30:26: error: 'i' undeclared here (not in a function)
   30 |     for( i=0; i<3;i++} p[i] = a[i].s1p;
      |                          ^
main.c:30:24: warning: data definition has no type or storage class
   30 |     for( i=0; i<3;i++} p[i] = a[i].s1p;
      |                        ^
main.c:30:24: warning: type defaults to 'int' in declaration of 'p' [-Wimplicit-int]
main.c:30:31: error: 'a' undeclared here (not in a function)
   30 |     for( i=0; i<3;i++} p[i] = a[i].s1p;
      |                               ^
main.c:31:41: error: expected declaration specifiers or '...' before string constant
   31 |     PRINT3( s, p[0]->s, (*p)->s, (**p).s);
      |                                         ^
main.c:6:34: note: in definition of macro 'PR'
    6 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:31:5: note: in expansion of macro 'PRINT3'
   31 |     PRINT3( s, p[0]->s, (*p)->s, (**p).s);
      |     ^~~~~~
main.c:6:58: error: expected declaration specifiers or '...' before '(' token
    6 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                                          ^
main.c:10:28: note: in expansion of macro 'PR'
   10 | #define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
      |                            ^~
main.c:31:5: note: in expansion of macro 'PRINT3'
   31 |     PRINT3( s, p[0]->s, (*p)->s, (**p).s);
      |     ^~~~~~
main.c:32:10: error: expected declaration specifiers or '...' before '*' token
   32 |     swap(*p], s);
      |          ^
main.c:32:12: error: expected ';', ',' or ')' before ']' token
   32 |     swap(*p], s);
      |            ^
main.c:33:40: error: expected declaration specifiers or '...' before string constant
   33 |     PRINT3( s, p[0]->s, (*p)->s, (*p).s);
      |                                        ^
main.c:6:34: note: in definition of macro 'PR'
    6 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:33:5: note: in expansion of macro 'PRINT3'
   33 |     PRINT3( s, p[0]->s, (*p)->s, (*p).s);
      |     ^~~~~~
main.c:6:58: error: expected declaration specifiers or '...' before '(' token
    6 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                                          ^
main.c:10:28: note: in expansion of macro 'PR'
   10 | #define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
      |                            ^~
main.c:33:5: note: in expansion of macro 'PRINT3'
   33 |     PRINT3( s, p[0]->s, (*p)->s, (*p).s);
      |     ^~~~~~
main.c:34:10: error: expected declaration specifiers or '...' before 'p'
   34 |     swap(p[0], p[0]->s1p);
      |          ^
main.c:34:16: error: expected declaration specifiers or '...' before 'p'
   34 |     swap(p[0], p[0]->s1p);
      |                ^
main.c:35:57: error: expected declaration specifiers or '...' before string constant
   35 |     PRINT3( s, p[0]->s, ([0]***p).s, ++(*++(*p)->.s1p).s);
      |                                                         ^
main.c:6:34: note: in definition of macro 'PR'
    6 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:35:5: note: in expansion of macro 'PRINT3'
   35 |     PRINT3( s, p[0]->s, ([0]***p).s, ++(*++(*p)->.s1p).s);
      |     ^~~~~~
main.c:6:58: error: expected declaration specifiers or '...' before '(' token
    6 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                                          ^
main.c:10:28: note: in expansion of macro 'PR'
   10 | #define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
      |                            ^~
main.c:35:5: note: in expansion of macro 'PRINT3'
   35 |     PRINT3( s, p[0]->s, ([0]***p).s, ++(*++(*p)->.s1p).s);
      |     ^~~~~~
main.c:37:1: error: expected identifier or '(' before ')' token
   37 | )
      | ^

[Compilation failed with exit code 1]
*/
