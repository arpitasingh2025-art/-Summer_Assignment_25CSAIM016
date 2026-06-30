//Q1
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100],rev[100];
    int i=0,c=0;
    printf("Enter a string");
    scanf("%s",s);
    while (s[i]!='\0')
    {
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        rev[c]=s[j];
        c++;
    }
    rev[c]='\0';
    if(strcmp(s,rev)==0)
    {
        printf("palindrome ");
    }
    else
    {
        printf("not pallindrome");
    }
    return 0;
}