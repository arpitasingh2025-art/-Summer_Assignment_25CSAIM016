// Q1
#include <stdio.h>
int sum();
int main() {
    sum();
    return 0;
}
int sum() 
{
    int a,b,c;
    printf("enter two values");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum %d",c);
}