#include<stdio.h>

void modify(char[],char[]);

void main()
{
    char str1[] = "Neha Elizabeth Thomas";
    char str2[] = "Nelson";
    modify(str1,str2);
}

void modify(char str1[],char str2[])
{
    int i;
    for(i=0 ; str1[i] != '\0' ; i++);
    printf("\n length of string1 = %d",i);

    str2[0] = 'n';
    printf("\n %s \n",str2);

}
