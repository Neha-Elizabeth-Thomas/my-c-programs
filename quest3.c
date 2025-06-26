/*Q3 Find the sum of first N terms of the series*/

#include<stdio.h>
void main()
{
int N,i;
long int factorial = 1;
float x,numerator=1.0 ,sum=0.0,term;

 printf("Enter the number of terms(N): ");
 scanf("%d",&N);

 printf("Enter the value of x: ");
 scanf("%f",&x);

 for(i=1;i<=N;i++)
 {
    numerator = numerator*x;
    factorial = factorial*i;
    term = numerator/factorial;
    sum = sum + term;
 }
 printf("\n sum of %d term of the series=%f ",N,sum);
}