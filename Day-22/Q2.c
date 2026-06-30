//q2
#include <stdio.h>

int main()
{
    char s[100];
    int i=0,words=1;
    printf("Enter a string");
    fgets(s,sizeof(s),stdin);
    while (s[i]!='\0')
    {
        if (s[i]==' ')
        {
            words++;
        }
        i++;
    }

    printf("Words %d",words);
    return 0;
}