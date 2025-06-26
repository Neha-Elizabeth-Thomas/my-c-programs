#include<stdio.h>

void main()
{
    int N,sum = 0,num[20],i;
    float avg;

    printf("\n How many numbers: ");
    scanf("%d",&N);

    printf("\n Enter the numbers: ");
    for(i = 0; i<N;i++)
    {
        scanf("%d",&num[i]);
        sum += num[i];
    }
    avg = (float)sum/N;

    printf("\n number\t\tdeviation");
    printf(" \n------------------------------------");
    for(i = 0;i<N ;i++)
    {
        printf("\n %d\t\t%.2f",num[i],avg-num[i]);
    }
    printf("\n---------------------------------------");
}