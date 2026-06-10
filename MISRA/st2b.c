#include <stdio.h> 

#define PR(format,value) printf(#value " = %" #format "\t", (value))
#define NL putchar('\n') 
#define PRINT1(f,x1) PR(f,x1), NL 
#define PRINT2(f,x1, x2) PR(f,x1), PRINT1(f,x2) 
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3) 

struct S1 {
    char *s;
    int i;
    struct S1 *s1p;
};

int main(void) 
{
    /* 現代の環境でクラッシュするのを防ぐため、文字列を書き換え可能な配列として定義 */
    char str0[] = "abcd";
    char str1[] = "efgh";
    char str2[] = "ijkl";

    static struct S1 a[3];
    // staticな配列に後からアドレスをセット
    a[0].s = str0; a[0].i = 1; a[0].s1p = a+1;
    a[1].s = str1; a[1].i = 2; a[1].s1p = a+2;
    a[2].s = str2; a[2].i = 3; a[2].s1p = a;

    struct S1 *p = a;
    int i;

    /* Structures 2.2 */
    PRINT3(s, a[0].s, p->s, a[2].s1p->s);

    /* Structures 2.3 */
    for( i=0; i<2; i++ ) {
        PR(d, --a[i].i);
        PR(c, ++a[i].s[3]);  /* 配列にしたので、ここでの書き換えが許可されます */
        NL;
    }

    /* Structures 2.4 (安全分解版) */
    char *v1 = ++(p->s); 
    ++p; 
    char *v2 = a[p->i].s;
    --(p->s1p->i);
    char *v3 = a[p->s1p->i].s;

    printf("++(p->s) = %s\ta[(++p)->i].s = %s\ta[--(p->s1p->i)].s = %s\n", v1, v2, v3);

    return 0;
}

/*

a[0].s = abcd   p->s = abcd     a[2].s1p->s = abcd
--a[i].i = 0    ++a[i].s[3] = e
--a[i].i = 1    ++a[i].s[3] = i
++(p->s) = bce  a[(++p)->i].s = efgi    a[--(p->s1p->i)].s = ijkl

*/
