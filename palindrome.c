#include<stdio.h>
#include<stdio.h>

int palindrome(char[]);
void main(void)
{
    char str[50],word[20];
    int i=0;

    printf("\n Enter a string: ");
    scanf(" %^[\n]",str);

    if(str[i] != '\0')
    {
        while(str[i] != ' ')
        {
            word[i] = str[i];
            i++;
        }
        word[i] = '\0';
        if( palindrome(word) )
            printf(" %s",word);
        i++;
    }

}

int palindrome(char word[])
{
    int l=0,r,i;

    for(i=0 ; word[i] != '\0'; i++);
    r = i-1;

    while(l<r)
    {
        if(word[l] != word[r])
            return 0;
            
        l++;
        r--;
    }
    if(l ==  r)
        return 0;
}