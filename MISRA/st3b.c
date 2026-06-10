// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf

#include<stdio.h>

#define PR(format,value) printf(#value "=%" #format "\t",(value))
#define NL putchar('\n')
#define PRINT1(f,x1) PR(f,(x1)), NL
#define PRINT2(f,x1, x2) PR(f,x1), PRINT1(f,(x2))
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4)


struct S1 {
    char *s;
    struct S1 * s1p;
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
    for( i=0; i<3;i++) {
    p[i] = a[i].s1p;
}
    PRINT3( s, p[0]->s, (*p)->s, (**p).s);
    swap(*p, a);
    PRINT3( s, p[0]->s, (*p)->s, (*p)->s1p->s);
    swap(p[0], p[0]->s1p);
    PRINT3( s, p[0]->s, (*++p[0]).s, ++(*++(*p)->s1p).s);

}

void swap(struct S1 *p1, struct S1 *p2)
{
    char * temp;
    temp=p1->s;
    p1->s = p2->s;
    p2->s = temp;
}

/*
p[0]->s=efgh    (*p)->s=efgh    (((**p).s))=efgh
p[0]->s=abcd    (*p)->s=abcd    (((*p)->s1p->s))=ijkl
p[0]->s=ijkl    (*++p[0]).s=abcd        ((++(*++(*p)->s1p).s))=jkl

*/
