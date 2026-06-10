// Q1
#include <stdio.h>

int main() {
    int r,s=0,n, sum=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
        sum+=r;
    }
    printf("sum of digits%d",sum);

    return 0;
}