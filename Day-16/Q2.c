// Q2
#include <stdio.h>
int main() 
{
    int n,i,c,j,t,m=0, a[100];
    printf("enter a no.") ;
    scanf("%d",&n);
    printf("Enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
    if(c>m)
    {
        m=c;
        t=a[i];
    }
    }
    printf("element %d with max frequency%d",t,m);
    return 0;
}