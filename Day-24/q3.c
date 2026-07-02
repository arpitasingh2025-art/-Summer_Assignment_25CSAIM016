//q3
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], longest[100];
    int i = 0, j = 0;
    int max = 0, len = 0;
    printf("Enter a sentence");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            longest[len] = str[i];
            len++;
        } else {
            if (len > max) {
                max = len;
                longest[len] = '\0';
                strcpy(longest, longest);
            }
            len = 0;
        }
        i++;
    }
    if (len > max) {
        max = len;
        longest[len] = '\0';
    }
    printf("Length of longest word = %d\n", max);
    printf("Longest word = %s", longest);
    return 0;
}