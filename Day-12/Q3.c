// Q3
#include <stdio.h>
int fib(int l);
int main() {
    int n, d;
    printf("enter till u want series");
    scanf("%d",&n);
    d=fib(n);
    printf("%d",d);
    return 0;
}
int fib(int l) 
{
    int a, b, c, i;
    a=0;
    b=1;
    printf("%d%d",a,b);
    for(i=2;i<=l;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b, 
        b=c;
    }
}