// q3
#include <stdio.h>

int main() {
    int a[100],b[100],n1,n2,i,c[200],j;
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
        for(j=0;j<n2;j++)
        {
            if(a[i]==a[j])
            {
                printf("intersection of both arrays %d",&a[i]);
                break;
            }
        }
    }
    return 0;
}