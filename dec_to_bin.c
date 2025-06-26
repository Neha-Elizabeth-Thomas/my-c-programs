#include<stdio.h>
void main()
{
    int decimal,n,binary[20],i = 0;

    printf("\n Enter the decimal number to be converted into binary: ");
    scanf("%d",&decimal);

    while(decimal)
    {
        binary[i] = decimal % 2;
        decimal = decimal/2;
        i++;
    }   
    n = i;
    printf("\n The binary equivalent of given decimal number is : ");
    for(i = n-1 ; i>=0 ; i--)
    {
        printf("%d",binary[i]);
    }

}