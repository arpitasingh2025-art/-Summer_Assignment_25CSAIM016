// Q3
#include <stdio.h>

int main() {
    int n, fact=1, i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("factorial of the number%d",fact);

    return 0;
}