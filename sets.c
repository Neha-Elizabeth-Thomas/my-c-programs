/*write a program to find the union and intersion of two sets A and B*/
#include<stdio.h>
void main()
{
    int m,n,A[20],B[20],i,j,uni;

    printf("Enter the no of elements in set A\n");
    scanf("%d",&m);

    printf("Enter the no of elements in set B\n");
    scanf("%d",&n);

    printf("Enter the elements of set A\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Enter the elements of set B\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&B[j]);
    }

    printf("Intersection of set A and B =");
    printf("{");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i]==B[j])
            printf("%d \t",A[i]);
        }
    }
    printf("}");

    printf("\n Union of Aand B = ");
    printf("{");
    for(i = 0;i<m;i++)
    {
        printf("%d \t",A[i]);

    }
    for(j=0;j<n;j++)
    {
        uni = 1;

        for(i=0;i<m;i++)
        {
            if(A[i] == B[j])
            uni = 0;
            
        }
        if(uni)
        printf("%d \t",B[j]);
    }
    printf("}");
}