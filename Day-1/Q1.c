//Q1
#include <stdio.h>

int main() {
    int n, i,sum=0;
    printf("enter the number till which u want the sum");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum+=i;
    }
    printf("sum of n natural nos. %d",sum);

    return 0;
}