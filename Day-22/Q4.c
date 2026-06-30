//q4
#include <stdio.h>

int main()
{
    char s[100];
    int i=0,j=0;
    printf("Enter a string");
    fgets(s,sizeof(s),stdin);
    while (s[i]!='\0')
    {
        if (s[i]!=' ')
        {
            s[j]=s[i];
            j++;
        }
        i++;
    }
    s[j]='\0';
    printf("%s", s);

    return 0;
}