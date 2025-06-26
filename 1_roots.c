/*Neha Elizabeth Thomas 
roll no -53
date:1/6/23
ex no 1 :write a program to find the roots of a quadratic equation*/

#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,disc;
    float root1,root2,root,rp,ip;

    printf("Enter the value of coefficients of quadratic equation: ");
    scanf("%d %d %d",&a,&b,&c);

    disc = b*b - 4*a*c;

    if(disc > 0)
    {
        printf("/nRoots are Real and Distinct/n");
        root1 = (-b+sqrt(disc))/(2.0*a);
        root2 = (-b+sqrt(disc))/(2.0*a);
        printf("\nroot1 = %.2f",root1);
        printf("\n root2 = %.2f\n",root2);
    }
    else if(disc == 0)
        {
            printf("\n Roots are Real and Equal");
            root = -b/(2.0*a);
            printf("\n root = %.2f",root) ;
        }
        else
            {
                printf("\nRoots are Imaginary");
                rp = -b/(2.0*a);
                ip = sqrt(-disc)/(2.0*a);
                printf("\n Real part = %.2f",rp);
                printf("\n Imaginary part = %.2f",ip);
            }
}