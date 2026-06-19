// Q2
#include <stdio.h>
int max(int n1,int n2,int n3);
int main() {
    int a, b, c;
    printf("enter three nos.");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",max(a,b,c));
    return 0;
}
int max(int n1,int n2,int n3) 
{
    int m;
    if(n1>n2 && n1>n3)
    return n1;
    else
    {
        if(n2>n3) 
        return n2;
        else
        return n3;
    }