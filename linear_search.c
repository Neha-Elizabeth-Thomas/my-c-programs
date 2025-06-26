#include<stdio.h>

void main()
{
    int key,a[20],i,n;
    char option;

    printf("\n Enter the value ofN: ");
    scanf("%d",&n);

    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    do
    { 
         printf("\n Enter the number to be searched: ");
         scanf("%d",&key);

        for(i = 0;i<n ; i++)
        {
            if(a[i] == key)
            {
                printf("\n %d is present at location %d",key,i+1);
                break;
            }

        }
        if(i == n)
            printf(" %d is not in found in this list\n",key);
        printf("\nrepeat(y/n)");
        scanf(" %c",option);
    while(option == 'y' || option == 'Y');
}
