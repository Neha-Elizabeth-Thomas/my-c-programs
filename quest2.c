/*q2 Input N positive integers and display those numbers starting with a particular digit*/
#include<stdio.h>
void main()
{
    int N,num,digit1,digit,i,number;

    printf("How many numbers: ");
    scanf("%d",&N);

    printf("Enter the first digit: ");
    scanf("%d",&digit1);

    printf("Enter %d numbers:",N);

    for(i=0;i<N;i++)
    {
        scanf("%d",&num);
        number = num;

        while(num)
        {
            digit = num%10;
            num = num/10;
        }
    if(digit == digit1)
    printf("%d starts with %d \n",number,digit1);
    }
}
