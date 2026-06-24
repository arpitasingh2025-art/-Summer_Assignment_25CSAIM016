// Q3
#include <stdio.h>
int main() 
{
    int n,i,s,j, a[100];
    printf("enter a no.") ;
    scanf("%d",&n);
    printf("Enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter sum");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==s)
            {
                printf("pairs %d %d",a[i],a[j]);
            }
        }
    }
    return 0;
}