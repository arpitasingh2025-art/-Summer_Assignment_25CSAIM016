//Q3
#include <stdio.h>

int main() {
    int i,a[10],n,l;
    printf("enter the no. of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    printf("array shifted to right");
    l=a[n-1];
    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=l;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    
    return 0;
    
    
}