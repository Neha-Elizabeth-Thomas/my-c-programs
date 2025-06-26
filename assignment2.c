/*Q1 display all prime numbers between two counting numbers.Also count the number of prime numbers*/
#include<stdio.h>
#include<math.h>

void main()
{
    int start,end,i,j,count=0;
    
    printf("Enter the starting number: ");
    scanf("%d",&start);

    printf("Enter the ending number: ");
    scanf("%d",&end);
    printf("Prime numbers between %d and %d are: ",start,end);

    for(i=start;i<=end;i++)
    {
        if(i == 0 || i == 1)
        continue;

        int prime = 1;
        for(j=2; j<=sqrt(i); j++)
        {
            if(i%j == 0)
            {
                prime = 0;
                break;
            }
        }
        if(prime)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\ntotal number of prime numbers between %d and%d are:%d ",start,end,count);
}