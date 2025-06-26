#include<stdio.h>

void main()
{
    int N,a[20],i;

    printf("\n how many numbers: ");
    scanf("%d",&N);

    printf("\n Enter the numbers: " );

    for(i = 0;i<N-1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n Numbers in reverse order is: ");

    for(i = (N-1);i>=0;i--)
    {
        printf(" %d \t",a[i]);
    }
}