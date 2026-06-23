//Q1
#include <stdio.h>

int main() {
    int i,a[10],n;
    printf("enter the no. of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    printf("array in reverse order");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
    
    
}