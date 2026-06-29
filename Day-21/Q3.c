// Q3
#include <stdio.h>

int main()
{
    char s[100];
    int i=0,vowels=0,consonants=0;
    printf("Enter a string");
    scanf("%s",s);
    while (s[i] != '\0')
    {
        if (s[i]=='a'|| s[i]=='e'||s[i] == 'i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
        i++;
    }

    printf("Vowels %d", vowels);
    printf("Consonants %d", consonants);

    return 0;
}