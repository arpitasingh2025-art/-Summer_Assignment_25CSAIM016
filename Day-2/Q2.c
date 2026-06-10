// Q2
#include <stdio.h>

int main() {
    int r,s=0,n;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("reverse number%d",s);
    return 0;
}