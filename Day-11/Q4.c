// Q4
#include <stdio.h>
int fact(int l);
int main() {
    int n, d;
    printf("enter number");
    scanf("%d",&n);
    d=fact(n);
    printf("%d",d);
    return 0;
}
int fact(int l) 
{
    int f=1,i;
    for(i=1;i<=l;i++)
    {
        f*=i;
    }
    return f;
}