// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf

#include <stdio.h>
#define PR(format,value) printf(#value "=%" #format "\t",(value))
#define NL putchar('\n')
#define PRINT1(f,x1) PR(f,x1), NL
#define PRINT2(f,x1, x2) PR(f,x1), PRINT1(f,x2)
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4)

int reset(void);
int next(void);
int last(void);
int new(int i);


int i = 1;

int main(void) {
    auto int i, j;
    i = reset();
    for (j=1; j<=3; j++){
        PRINT2(d,i,j);
        PRINT1(d,next(i));
        PRINT1(d,last(i));
        PRINT1(d,new(i+j));
    }
}

int reset (){
    return(i);
}

    static int i2 = 10;
    int next()
    {
        return(i2+=1);
    }
    int last (){
        return (i2-=1);
    }
    int new(int i2){
        static int j=5;
        return (i2=j+=i2);
    }


/*
main.c: In function 'main':
main.c:25:18: error: too many arguments to function 'next'
   25 |         PRINT1(d,next(i));
      |                  ^~~~
main.c:5:59: note: in definition of macro 'PR'
    5 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                                           ^~~~~
main.c:25:9: note: in expansion of macro 'PRINT1'
   25 |         PRINT1(d,next(i));
      |         ^~~~~~
main.c:13:5: note: declared here
   13 | int next(void);
      |     ^~~~
main.c:26:18: error: too many arguments to function 'last'
   26 |         PRINT1(d,last(i));
      |                  ^~~~
main.c:5:59: note: in definition of macro 'PR'
    5 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                                           ^~~~~
main.c:26:9: note: in expansion of macro 'PRINT1'
   26 |         PRINT1(d,last(i));
      |         ^~~~~~
main.c:14:5: note: declared here
   14 | int last(void);
      |     ^~~~

[Compilation failed with exit code 1]
*/
