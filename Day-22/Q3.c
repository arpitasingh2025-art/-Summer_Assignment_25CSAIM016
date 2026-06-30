//q3
#include <stdio.h>

int main()
{
    char s[100];
    int i,j,count;
    printf("Enter a string");
    fgets(s,sizeof(s),stdin);
    for (i=0;s[i]!='\0';i++)
    {
        count=1;

        if (s[i]=='*')   
            continue;

        for (j=i+1;s[j]!='\0';j++)
        {
            if (s[i]==s[j])
            {
                count++;
                s[j]='*';  
            }
        }
        if (s[i]!='\n')
            printf("%c %d",s[i], count);
    }

    return 0;
}