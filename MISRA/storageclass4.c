// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf

#include <stdio.h>
#define PR(format,value) printf(#value "=%" #format "\t",(value))
#define NL putchar('\n')
#define PRINT1(f,x1) PR(f,x1), NL
#define PRINT2(f,x1, x2) PR(f,x1), PRINT1(f,x2)
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4)

int reset():
int next();
int last();
int new(int i);


int i = 1;

int main() {
    auto int i, j;
    i = reset();
    for (j=1; j<==3; j++){
        PRINT2(d,i,j);
        PRINT1(d,next(i));
        PRINT1(d,last(i));
        ORUBT1(d,new(i+j));
    }
}

reset (){
    return(k);
}
{
    statuc int i = 10;
    int next()
    {
        return(i+=1);
    }
    int last (){
        return (i-=1);
    }
    inet new(i){
        static int j=5;
        return (i=j+=i);
    }
    }
    }
}
}

/*
main.c: In function 'reset':
main.c:12:12: error: expected declaration specifiers before ':' token
   12 | int reset():
      |            ^
main.c:18:1: error: parameter 'i' is initialized
   18 | int i = 1;
      | ^~~
main.c:20:12: error: expected '=', ',', ';', 'asm' or '__attribute__' before '{' token
   20 | int main() {
      |            ^
main.c:31:1: error: expected declaration specifiers before 'reset'
   31 | reset (){
      | ^~~~~
main.c:18:5: error: declaration for parameter 'i' but no such parameter
   18 | int i = 1;
      |     ^
main.c:15:5: error: declaration for parameter 'new' but no such parameter
   15 | int new(int i);
      |     ^~~
main.c:14:5: error: declaration for parameter 'last' but no such parameter
   14 | int last();
      |     ^~~~
main.c:35:5: error: 'statuc' undeclared (first use in this function)
   35 |     statuc int i = 10;
      |     ^~~~~~
main.c:35:5: note: each undeclared identifier is reported only once for each function it appears in
main.c:35:11: error: expected ';' before 'int'
   35 |     statuc int i = 10;
      |           ^~~~
      |           ;
main.c:40:9: error: 'last' redeclared as different kind of symbol
   40 |     int last (){
      |         ^~~~
main.c:14:5: note: previous definition of 'last' with type 'int (*)()'
   14 | int last();
      |     ^~~~
main.c:43:5: error: unknown type name 'inet'; did you mean 'int'?
   43 |     inet new(i){
      |     ^~~~
      |     int
main.c:43:16: error: expected '=', ',', ';', 'asm' or '__attribute__' before '{' token
   43 |     inet new(i){
      |                ^
main.c: At top level:
main.c:48:5: error: expected identifier or '(' before '}' token
   48 |     }
      |     ^
main.c:49:1: error: expected identifier or '(' before '}' token
   49 | }
      | ^
main.c:50:1: error: expected identifier or '(' before '}' token
   50 | }
      | ^

[Compilation failed with exit code 1]
*?
