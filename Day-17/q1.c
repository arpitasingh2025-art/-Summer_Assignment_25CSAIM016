// q1
#include <stdio.h>

int main() {
    int a[100],b[100],n1,n2,i,c[200];
    printf("enter no. of elements in first array");
    scanf("%d",&n1);
    printf("enter elements of array 1");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter no. of elements in second array");
    scanf("%d",&n2);
    printf("enter elements of array 2");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<n2;i++)
    {
        c[i+n1]=b[i];
    }
    for(i=0;i<n1+n2;i++)
    {
        printf("%d",c[i]);
    }
    
    
    return 0;
}