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
