// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf


#include <stdio.h> 
#define PR(format,value) printf(#value "= %" #format "\t",(value))
#define NL putchar('\n')
#define PRINT1(f,x1) PR(f,x1), NL
#define PRINT2(f,x1,x2) PR(f,x1), PRINT1(f,x2)
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4)


char *c[] = {
    "ENTER",
    "NEW",
    "POINT",
    "FIRST"
};

char **cp[] = { c+3, c+2, c+1, c };
char ***cpp = cp;

int main()
{
    printf("%s", **++cpp);
    printf("%s ", *--*++cpp+3);
    printf("%s", *cpp[-2]+3);
    printf("%s\n", cpp[-1][-1]+1);
}

/*

POINTER STEW
*/

There is an OS that the result is not equal .

