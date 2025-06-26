//Q4 find the sum of digits and reverse of a counting number
#include<stdio.h>
void main()
{
    int num,digit,sum = 0,reverse = 0;

    printf("Enter a counting number: ");
    scanf("%d",&num);

    while(num)
    {
    digit = num%10;
    num = num/10;
    sum += digit;
    reverse = reverse*10 + digit; 
    }
printf("Sum of digits of the counting number = %d \n",sum);
printf("reverse of the number = %d \n",reverse);
}