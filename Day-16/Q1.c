// Q1
#include <stdio.h>
int main() 
{
    int n,i,sum=0,t,m, a[100];
    printf("enter a no.") ;
    scanf("%d",&n);
    printf("Enter elements");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    t=n*(n+1)/2;
    m=t-sum;
    printf("Missing number %d",m);
    return 0;
}