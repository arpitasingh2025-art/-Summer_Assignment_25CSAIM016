//Q4
#include <stdio.h>

int main() {
    int a[10],n,i,j=0,temp;
    printf("Enter number of elements");
    scanf("%d",&n);
    printf("Enter elements");
    for(i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++) 
    {
        if(a[i] != 0) 
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }

    printf("Array after moving zeroes to the end");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}