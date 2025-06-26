#include<stdio.h>

int bsearch(int[],int,int,int);

void main()
{
    int key,a[20],i,N,top = 0,bot = N-1,loc;
    char option;

    printf("\n How many numbers in the list? ");
    scanf("%d",&N);

    printf("\n Enter %d numbers in ascending order: ",N);
    for(i=0 ; i<N ; i++)
        scanf("%d",&a[i]);
    do
    {    
        printf("\n Enter the number to be searched : ");
        scanf("%d",&key);

        loc = bsearch(a,top,bot,key);
        
        if(loc >= 0)
            printf("\n %d is present in the given list at position %d \n",key,loc+1);
        else
            printf("\n %d is not present in the given list",key);

        printf("\n Do you want to repeat? (y/n)");
        scanf(" %c",&option);
    }
    while(option == 'y' || option == 'Y');
}

int bsearch(int a[],int top,int bot ,int key)
{
    int mid;
    while(top <= bot)
    {
        mid = (top + bot)/2;
        if(a[mid] == key)
            return mid;
            else if(key > a[mid])
                    return bsearch(a,mid+1,bot,key);
                    else
                        return bsearch(a,top,mid-1,key);
    }
        return -99;
}