#include<stdio.h>

int fib(int);
void main(){
    int k,i;

    printf("\n Hoe many numbers of fibonnacci series is to be printed? ");
    scanf("%d",k);

    for(i=1 ; i<=k ; i++)
    {
        printf("%4d",fib(i));
    }
}

int fib(int i)
{
    

}