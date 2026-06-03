// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf


#include <stdio.h> 
#define PR(format,value) printf(#value " = %" #format "\t", (value))
#define NL putchar('\n') 
#define PRINT1(f,x1) PR(f,x1), NL 
#define PRINT2(f,x1, x2) PR(f,x1), PRINT1(f,x2) 
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3) 
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4) 

int a[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

int *pa[3] = {
    a[0], a[1], a[2]
};

int *p = a[0];

int main(void){
    int i;
    for(i = 0; i < 3; i++){
        PRINT3(d, a[i][2-i], *a[i], *(*(a+i)+i) );
    }
    NL;
    
    for(i = 0; i < 3; i++){
        PRINT2(d, *pa[i], p[i] );
    }
}
/*
a[i][2-i] = 3   *a[i] = 1       *(*(a+i)+i) = 1
a[i][2-i] = 5   *a[i] = 4       *(*(a+i)+i) = 5
a[i][2-i] = 7   *a[i] = 7       *(*(a+i)+i) = 9

*pa[i] = 1      p[i] = 1
*pa[i] = 4      p[i] = 2
*pa[i] = 7      p[i] = 3



*/
