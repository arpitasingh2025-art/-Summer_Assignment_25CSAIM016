// Q3
#include <stdio.h>

int main() {
    int a[100],n,i,max,min;
    printf("no. of elements");
    scanf("%d",&n);
    printf("enter nos ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max) 
        {
            max=a[i+1];
        }
    }
    printf("%d",max);
    printf("\n");
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min) 
        {
            min=a[i];
        }
    }
    printf("%d",min);
    
return 0;
}