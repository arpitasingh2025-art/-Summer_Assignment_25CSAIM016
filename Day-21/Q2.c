//Q2
#include <stdio.h>

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
    printf("%s",rev);
    return 0;
}