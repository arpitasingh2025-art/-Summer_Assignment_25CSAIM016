// Q3
#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    while (b!=0)
    {
        c=b;
        b=a%b;
        a=c;
    }
    printf("gcd %d", a);

    return 0;
}