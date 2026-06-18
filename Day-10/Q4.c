//Q4
#include <stdio.h>

int main() {
    int i,j,k;
    char c;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        c='A';
        for(k=1;k<=i;k++)
        {
            printf("%c",c);
            c++;
        }
        c=c-2;
        for(k=i-1;k>=1;k--)
        {
            printf("%c",c);
                        c++;
        }
        printf("\n");
    }

    return 0;
}