#include<stdio.h>

int bsearch(int [],int top,int bot,int key);

void main()
{
    int a[20],n,key,i,loc;

    printf("\nEnter the number of elements in the list : ");
    scanf("%d",&n);

    printf("\n Enter the elements of the list in increasing order: ");
    for(i=0 ; i<n ; i++)
        scanf("%d",&a[i]);
    
    printf("\n Enter the number to be searched: ");
    scanf("%d",&key);

    loc = bsearch(a,0,n-1,key);

    if( loc < 0)
        printf("\n %d is not present in the given list \n",key);
    else
        printf("\n %d is present in the list at %d \n",key,loc + 1);
}

int bsearch(int a[],int top,int bot,int key)
{
    int mid = (top + bot)/2;

    if(top > bot)
        return -1;
        if(a[mid] == key)
            return mid;
            if(key > a[mid])
                return bsearch(a,mid+1,bot,key);
                else
                    return bsearch(a,top,mid-1,key);
}

