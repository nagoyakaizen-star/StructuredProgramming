#include <stdio.h> 
#define PR(format,value) printf(#value "= %" #format "\t",(value))
#define NL putchar('\n')
#define PRINT1(f,x1) PR(f,x1), NL
#define PRINT2(f,x1,x2) PR(f,x1), PRINT1(f,x2)
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4)


int a[]={0,1,2,3,4};

int main()
{
    int i, *p;

    for( i=0; i<=4; i++ ) {PR(d,a[i]); PR(d,(long)&a[i]);}
    NL;
    for( p = &a[0]; p<=&a[4]; p++ )
        PR(d,(long)p);
        PR(d,*p);
    NL; NL;

    for( p = &a[0],i=1; i<=5; i++ )
        PR(d,p[i]);
    NL;
    for( p=a,i=0; p+i<=a+4; p++,i++ )
        PR(d,*(p+i));
    NL; NL;

    for( p=a+4; p>=a; p-- ) PR(d,*p);
    NL;
    for( p=a+4,i=0; i<=4; i++ ) PR(d,p[-i]);
    NL;
    for( p=a+4; p>=a; p-- ) PR(d,a[p-a]);
    NL;
}

/*

main.c: In function 'main':
main.c:16:56: warning: format '%d' expects argument of type 'int', but argument 2 has type 'long int' [-Wformat=]
   16 |     for( i=0; i<=4; i++ ) {PR(d,a[i]); PR(d,(long)&a[i]);}
      |                                                        ^
main.c:2:34: note: in definition of macro 'PR'
    2 | #define PR(format,value) printf(#value "= %" #format "\t",(value))
      |                                  ^~~~~
main.c:19:21: warning: format '%d' expects argument of type 'int', but argument 2 has type 'long int' [-Wformat=]
   19 |         PR(d,(long)p);
      |                     ^
main.c:2:34: note: in definition of macro 'PR'
    2 | #define PR(format,value) printf(#value "= %" #format "\t",(value))
      |                                  ^~~~~
a[i]= 0 (long)&a[i]= 1784193040 a[i]= 1 (long)&a[i]= 1784193044        a[i]= 2 (long)&a[i]= 1784193048        a[i]= 3 (long)&a[i]= 1784193052a[i]= 4 (long)&a[i]= 1784193056
(long)p= 1784193040     (long)p= 1784193044   (long)p= 1784193048      (long)p= 1784193052   (long)p= 1784193056      *p= 0

p[i]= 1 p[i]= 2 p[i]= 3 p[i]= 4 p[i]= 0
*(p+i)= 0       *(p+i)= 2       *(p+i)= 4

*p= 4   *p= 3   *p= 2   *p= 1   *p= 0
p[-i]= 4        p[-i]= 3        p[-i]= 2      p[-i]= 1 p[-i]= 0
a[p-a]= 4       a[p-a]= 3       a[p-a]= 2     a[p-a]= 1        a[p-a]= 0

[Execution complete with exit code 0]

*/
