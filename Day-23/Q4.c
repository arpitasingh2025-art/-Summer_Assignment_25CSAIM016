//q4
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, count, max = 0;
    char maxChar;
    printf("Enter a string");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        count = 1;
        if (str[i] == ' ')
            continue;
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '0';   
            }
        }
        if (count > max) {
            max = count;
            maxChar = str[i];
        }
    }
    printf("Maximum occurring character %c",maxChar);
    printf("Frequency %d",max);

    return 0;
}