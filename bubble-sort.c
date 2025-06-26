#include<stdio.h>

void main()
{
    int i,j,N,a[20],temp;

    printf("\n How many numbers? ");
    scanf("%d",&N);

    printf("\n Enter %d numbers: ",N);
    for(j=0 ; j<N ; j++)
        scanf("%d",&a[j]);

    for(i = 1 ; i<N ; i++)
    {
        for(j = 0 ; j<= N-i-1 ; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\n The sorted list in ascending order is : \n");
    for(j = 0 ; j<N ; j++)
    {
        printf("%d \n",a[j]);
    }

}