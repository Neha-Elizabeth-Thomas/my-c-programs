#include<stdio.h>

float avg(int[],int);
void main()
{
    int marks[5] = {20,30,60,45,26},size;
    float average;

    size = sizeof(marks)/sizeof(marks[0]);

    printf("\n average = %f \n",avg(marks , size));

    printf("\n size of array inside main fn: %d \n",sizeof(marks));

}

float avg(int marks[],int size)
{
    int i,sum = 0;
    float average;

    for(i=0 ; i<size ; i++)
    {
        sum += marks[i];
    }
    average = sum / size;

    printf("\n Size of array inside the function : %d \n",sizeof(marks));
    return average;
}