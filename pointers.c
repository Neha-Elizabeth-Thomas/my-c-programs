#include<stdio.h>

void main()
{
    char a,*p;

    p = &a;

    printf("\n Enter a value: ");
    scanf(" %c",p);

    printf("\n Value = %c \n address = %d",*p,p);

}