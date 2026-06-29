//Q4
#include <stdio.h>

int main()
{
    char s[100],up[100];
    int i=0,c=0;
    printf("Enter a string");
    scanf("%s",s);
    while (s[i]!='\0')
    {
        i++;
    }
    for(int j=0;j<i;j++)
    {
        s[j]=s[j]-32;
        up[c]=s[j];
        c++;
    }
    printf("%s",up);
    return 0;
}