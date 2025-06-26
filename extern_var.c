#include<stdio.h>

int fun1(void);
int fun3(void);
int fun2(void);

extern int a;
void main()
{
    printf("\n %d",a);
    printf("\n %d",fun1());
    printf("\n %d",fun2());
    printf("\n %d",fun3());
}
int a ;
int fun1()
{
    a = a+10;
}
int fun2()
{
    int a;
    a = 1;      /*local variable will have more precedence if it is
                 having the same name as of a global(external) variable*/ 
    return a;
}
int fun3()
{
    a = a+10;
}