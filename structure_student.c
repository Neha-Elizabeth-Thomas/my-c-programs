#include<stdio.h>

void main()
{
    struct marks
    {
        int sub[3];
        int total;
    };

    struct marks stud[10],total;
    int n,i,j,m;
    
    

    printf("\n How many students: ");
    scanf("%d",&n);

    printf("How many subjects: ");
    scanf("%d",&m);

    for(i=0 ; i<n ; i++)
    {

        stud[i].total = 0;
        printf("\n Enter the marks of %d subjects of student no %d : ",m,i+1);
        for(j=0 ; j<m ; j++)
        {
            scanf("%d",&stud[i].sub[j]);
            stud[i].total += stud[i].sub[j];
            total.sub[j] += stud[i].sub[j];

        }
        printf("Total marks of student no %d = %d\n",i+1,stud[i].total);

        for(j=0 ; j<m ; j++)
        {
             printf("\n Total marks of all students in \n sub %d = %d ",j+1,total.sub[i]);

        }
    }



}