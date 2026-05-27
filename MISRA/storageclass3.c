#include <stdio.h> 
#define PR(format,value) printf(#value " = %" #format "\t", (value))
#define NL putchar('\n') 
#define PRINT1(f,x1) PR(f,x1), NL 
#define PRINT2(f,x1, x2) PR(f,x1), PRINT1(f,x2) 
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3) 
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4) 

int reset();
int next(int);
int last(int);
int new(int);

int i = 1;
int main(void){
    auto int i, j;
    i = reset();
    for(j = 1; j <= 3; j++){
        PRINT2(d, i, j);
        PRINT1(d, next(i));
        PRINT1(d, last(i));
        PRINT1(d, new(i + j));
    }
}

int reset(){
    return(i);
}

int next(j)
int j;
{
    return(j = i++);
}

int last(j)
int j;
{
    static int i = 10;
    return (j = i--);
}

int new(i)
int i;
{
    auto int j = 10;
    return(i = j += i);
}

/*
i = 1   j = 1
next(i) = 1
last(i) = 10
new(i + j) = 12
i = 1   j = 2
next(i) = 2
last(i) = 9
new(i + j) = 13
i = 1   j = 3
next(i) = 3
last(i) = 8
new(i + j) = 14
  */
