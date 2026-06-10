// Q3
#include <stdio.h>

int main() {
    int r,s=0,n,pro=1;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
        pro=pro*r;
    }
    printf("product of number%d",pro);
    return 0;
}