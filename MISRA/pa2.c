#include<stdio.h>

#define PR(format,value) printf(#value "=%" #format "\t",(value))
#define NL putchar('\n')
#define PRINT1(f,x1) PR(f,x1), NL
#define PRINT2(f,x1, x2) PR(f,x1), PRINT1(f,x2)
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4)

int a[]={0,1,2,3,4};
int *p[]={a,a+1,a+2,a+3,a+4};
int **pp=p;
int d;

int main()
{
    PRINT2(d,a,*a);
    PRINT3(d,p,*p,**p);
    PRINT3(d,pp,*pp,**pp);
    NL;

    pp++; PRINT3(d,pp-p,*pp-a,**pp);
    *pp++; PRINT3(d,pp-p,*pp-a,**pp);
    *++pp;PRINT3(d,pp-p,*pp-a,**p);
    ++*pp; PRINT3(d,pp-p,*pp-a,**pp);
    NL;


pp=p;
    **pp++; PRINT3(d,pp-p,*pp-a,**pp);
    *++*pp; PRINT3(d,pp-p,*pp-a,**pp);
    ++**pp; PRINT3(d,pp-p,*pp-a,**pp);
}

/*

main.c: In function 'main':
main.c:17:18: warning: format '%d' expects argument of type 'int', but argument 2 has type 'int *' [-Wformat=]
   17 |     PRINT2(d,a,*a);
      |                  ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:17:5: note: in expansion of macro 'PRINT2'
   17 |     PRINT2(d,a,*a);
      |     ^~~~~~
main.c:18:22: warning: format '%d' expects argument of type 'int', but argument 2 has type 'int **' [-Wformat=]
   18 |     PRINT3(d,p,*p,**p);
      |                      ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:18:5: note: in expansion of macro 'PRINT3'
   18 |     PRINT3(d,p,*p,**p);
      |     ^~~~~~
main.c:18:22: warning: format '%d' expects argument of type 'int', but argument 2 has type 'int *' [-Wformat=]
   18 |     PRINT3(d,p,*p,**p);
      |                      ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:7:38: note: in expansion of macro 'PRINT2'
    7 | #define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
      |                                      ^~~~~~
main.c:18:5: note: in expansion of macro 'PRINT3'
   18 |     PRINT3(d,p,*p,**p);
      |     ^~~~~~
main.c:19:25: warning: format '%d' expects argument of type 'int', but argument 2 has type 'int **' [-Wformat=]
   19 |     PRINT3(d,pp,*pp,**pp);
      |                         ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:19:5: note: in expansion of macro 'PRINT3'
   19 |     PRINT3(d,pp,*pp,**pp);
      |     ^~~~~~
main.c:19:25: warning: format '%d' expects argument of type 'int', but argument 2 has type 'int *' [-Wformat=]
   19 |     PRINT3(d,pp,*pp,**pp);
      |                         ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:7:38: note: in expansion of macro 'PRINT2'
    7 | #define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
      |                                      ^~~~~~
main.c:19:5: note: in expansion of macro 'PRINT3'
   19 |     PRINT3(d,pp,*pp,**pp);
      |     ^~~~~~
main.c:22:35: warning: format '%d' expects argument of type 'int', but argument 2 has type 'long int' [-Wformat=]
   22 |     pp++; PRINT3(d,pp-p,*pp-a,**pp);
      |                                   ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:22:11: note: in expansion of macro 'PRINT3'
   22 |     pp++; PRINT3(d,pp-p,*pp-a,**pp);
      |           ^~~~~~
main.c:22:35: warning: format '%d' expects argument of type 'int', but argument 2 has type 'long int' [-Wformat=]
   22 |     pp++; PRINT3(d,pp-p,*pp-a,**pp);
      |                                   ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:7:38: note: in expansion of macro 'PRINT2'
    7 | #define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
      |                                      ^~~~~~
main.c:22:11: note: in expansion of macro 'PRINT3'
   22 |     pp++; PRINT3(d,pp-p,*pp-a,**pp);
      |           ^~~~~~
main.c:23:36: warning: format '%d' expects argument of type 'int', but argument 2 has type 'long int' [-Wformat=]
   23 |     *pp++; PRINT3(d,pp-p,*pp-a,**pp);
      |                                    ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:23:12: note: in expansion of macro 'PRINT3'
   23 |     *pp++; PRINT3(d,pp-p,*pp-a,**pp);
      |            ^~~~~~
main.c:23:36: warning: format '%d' expects argument of type 'int', but argument 2 has type 'long int' [-Wformat=]
   23 |     *pp++; PRINT3(d,pp-p,*pp-a,**pp);
      |                                    ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:7:38: note: in expansion of macro 'PRINT2'
    7 | #define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
      |                                      ^~~~~~
main.c:23:12: note: in expansion of macro 'PRINT3'
   23 |     *pp++; PRINT3(d,pp-p,*pp-a,**pp);
      |            ^~~~~~
main.c:24:34: warning: format '%d' expects argument of type 'int', but argument 2 has type 'long int' [-Wformat=]
   24 |     *++pp;PRINT3(d,pp-p,*pp-a,**p);
      |                                  ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:24:11: note: in expansion of macro 'PRINT3'
   24 |     *++pp;PRINT3(d,pp-p,*pp-a,**p);
      |           ^~~~~~
main.c:24:34: warning: format '%d' expects argument of type 'int', but argument 2 has type 'long int' [-Wformat=]
   24 |     *++pp;PRINT3(d,pp-p,*pp-a,**p);
      |                                  ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:7:38: note: in expansion of macro 'PRINT2'
    7 | #define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
      |                                      ^~~~~~
main.c:24:11: note: in expansion of macro 'PRINT3'
   24 |     *++pp;PRINT3(d,pp-p,*pp-a,**p);
      |           ^~~~~~
main.c:25:36: warning: format '%d' expects argument of type 'int', but argument 2 has type 'long int' [-Wformat=]
   25 |     ++*pp; PRINT3(d,pp-p,*pp-a,**pp);
      |                                    ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:25:12: note: in expansion of macro 'PRINT3'
   25 |     ++*pp; PRINT3(d,pp-p,*pp-a,**pp);
      |            ^~~~~~
main.c:25:36: warning: format '%d' expects argument of type 'int', but argument 2 has type 'long int' [-Wformat=]
   25 |     ++*pp; PRINT3(d,pp-p,*pp-a,**pp);
      |                                    ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:7:38: note: in expansion of macro 'PRINT2'
    7 | #define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
      |                                      ^~~~~~
main.c:25:12: note: in expansion of macro 'PRINT3'
   25 |     ++*pp; PRINT3(d,pp-p,*pp-a,**pp);
      |            ^~~~~~
main.c:30:37: warning: format '%d' expects argument of type 'int', but argument 2 has type 'long int' [-Wformat=]
   30 |     **pp++; PRINT3(d,pp-p,*pp-a,**pp);
      |                                     ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:30:13: note: in expansion of macro 'PRINT3'
   30 |     **pp++; PRINT3(d,pp-p,*pp-a,**pp);
      |             ^~~~~~
main.c:30:37: warning: format '%d' expects argument of type 'int', but argument 2 has type 'long int' [-Wformat=]
   30 |     **pp++; PRINT3(d,pp-p,*pp-a,**pp);
      |                                     ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:7:38: note: in expansion of macro 'PRINT2'
    7 | #define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
      |                                      ^~~~~~
main.c:30:13: note: in expansion of macro 'PRINT3'
   30 |     **pp++; PRINT3(d,pp-p,*pp-a,**pp);
      |             ^~~~~~
main.c:31:37: warning: format '%d' expects argument of type 'int', but argument 2 has type 'long int' [-Wformat=]
   31 |     *++*pp; PRINT3(d,pp-p,*pp-a,**pp);
      |                                     ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:31:13: note: in expansion of macro 'PRINT3'
   31 |     *++*pp; PRINT3(d,pp-p,*pp-a,**pp);
      |             ^~~~~~
main.c:31:37: warning: format '%d' expects argument of type 'int', but argument 2 has type 'long int' [-Wformat=]
   31 |     *++*pp; PRINT3(d,pp-p,*pp-a,**pp);
      |                                     ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:7:38: note: in expansion of macro 'PRINT2'
    7 | #define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
      |                                      ^~~~~~
main.c:31:13: note: in expansion of macro 'PRINT3'
   31 |     *++*pp; PRINT3(d,pp-p,*pp-a,**pp);
      |             ^~~~~~
main.c:32:37: warning: format '%d' expects argument of type 'int', but argument 2 has type 'long int' [-Wformat=]
   32 |     ++**pp; PRINT3(d,pp-p,*pp-a,**pp);
      |                                     ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:32:13: note: in expansion of macro 'PRINT3'
   32 |     ++**pp; PRINT3(d,pp-p,*pp-a,**pp);
      |             ^~~~~~
main.c:32:37: warning: format '%d' expects argument of type 'int', but argument 2 has type 'long int' [-Wformat=]
   32 |     ++**pp; PRINT3(d,pp-p,*pp-a,**pp);
      |                                     ^
main.c:3:34: note: in definition of macro 'PR'
    3 | #define PR(format,value) printf(#value "=%" #format "\t",(value))
      |                                  ^~~~~
main.c:7:38: note: in expansion of macro 'PRINT2'
    7 | #define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
      |                                      ^~~~~~
main.c:32:13: note: in expansion of macro 'PRINT3'
   32 |     ++**pp; PRINT3(d,pp-p,*pp-a,**pp);
      |             ^~~~~~
a=-589459440    *a=0
p=-589459392    *p=-589459440   **p=0
pp=-589459392   *pp=-589459440  **pp=0

pp-p=1  *pp-a=1 **pp=1
pp-p=2  *pp-a=2 **pp=2
pp-p=3  *pp-a=3 **p=0
pp-p=3  *pp-a=4 **pp=4

pp-p=1  *pp-a=1 **pp=1
pp-p=1  *pp-a=2 **pp=2
pp-p=1  *pp-a=2 **pp=3

[Execution complete with exit code 0]
*?
