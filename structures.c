#include<stdio.h>

void main()
{
    struct student
    {
        int rno;
        char name[50];
        float mark;
    }s[i];
   
    int n,i;

    printf("\n How many students? ");
    scanf("%d",&n);

    for(i=0 ; i<n ; i++)
    {
        printf("\n Enter rno: ");
        scanf("%d",&s[i].rno);

        printf(" Enter name: ");
        scanf(" %[^\n]",s[i].name);

        printf(" Enter the mark: ");
        scanf("%f",&s[i].mark);
    }

    printf("\n roll no \t name\t\t mark");
    for(i=0 ; i<n ; i++)
    {
        printf("\n %-8d %-20s %-5.2f",s[i].rno,s[i].name,s[i].mark);
    }

}