// Q4
#include <stdio.h>

int main() {
    int a[100],n,i,odd=0,even=0;
    printf("no. of elements");
    scanf("%d",&n);
    printf("enter nos ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0) 
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("even %d",even);
    printf("odd %d",odd);
 return 0;
}