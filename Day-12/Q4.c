// Q4
#include <stdio.h>
int strong(int l);
int main() {
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    strong(n);
    return 0;
}
int strong(int l) 
{
    int i,sum=0,m;
    m=l;
    for(i=1;i<l;i++)
    {
        if(l%i==0)
        {
            sum+=i;
        }
    }
    if(sum==m)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("not Perfect Number");
    }
    return 0;
}