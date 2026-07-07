//Write a program to Create menu-driven string operations system.
#include<stdio.h>
#include<string.h>
int main()
{
    int choice;
    char str[100], ch;
    do
    {
        printf("\n===== STRING OPERATIONS =====\n");
        printf("1. Length of String\n");
        printf("2. Reverse String\n");
        printf("3. Check Palindrome\n");
        printf("4. Count Vowels & Consonants\n");
        printf("5. Convert to Uppercase\n");
        printf("6. Convert to Lowercase\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if(choice >= 1 && choice <= 6)
        {
            printf("Enter a string: ");
            scanf("%s", str);
        }
        switch(choice)
        {
            case 1:
                printf("Length: %d\n", strlen(str));
                break;
            case 2:
                printf("Reversed: ");
                for(int i = strlen(str) - 1; i >= 0; i--)
                    printf("%c", str[i]);
                printf("\n");
                break;
            case 3:
            {
                int len = strlen(str), palin = 1;
                for(int i = 0; i < len / 2; i++)
                {
                    if(str[i] != str[len - 1 - i])
                    {
                        palin = 0;
                        break;
                    }
                }
                if(palin)
                    printf("Palindrome!\n");
                else
                    printf("Not Palindrome!\n");
                break;
            }
            case 4:
            {
                int v = 0, c = 0;
                for(int i = 0; str[i] != '\0'; i++)
                {
                    ch = str[i];
                    if(ch >= 'A' && ch <= 'Z')
                        ch = ch + 32;
                    if(ch >= 'a' && ch <= 'z')
                    {
                        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                            v++;
                        else
                            c++;
                    }
                }
                printf("Vowels: %d, Consonants: %d\n", v, c);
                break;
            }
            case 5:
                for(int i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }
                printf("Uppercase: %s\n", str);
                break;
            case 6:
                for(int i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'A' && str[i] <= 'Z')
                        str[i] = str[i] + 32;
                }
                printf("Lowercase: %s\n", str);
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    while(choice != 7);
    return 0;
}
