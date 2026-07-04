// Q1
#include <stdio.h>

int main() {
    int a[100], b[100], c[200],n1, n2, i,j, temp;
    printf("Enter size of first array");
    scanf("%d", &n1);
    printf("Enter elements of first sorted array");
    for(i=0; i<n1; i++) 
    {
        scanf("%d",&a[i]);
    }
    printf("Enter size of second array");
    scanf("%d", &n2);
    printf("Enter elements of second sorted array");
    for(i=0; i<n2; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Merged sorted array");
    for(i=0;i<n1; i++)
    {
        c[i]=a[i];
    }
    for(i=n1;i<n1+n2;i++)
    {
        c[i]=b[i-n1];
    }
    for(i=0;i<(n1+n2)-1;i++) 
    {
        for(j=0;j<(n1+n2)-1-i;j++)
        {
            if(c[j]>c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    for(i=0;i<n1+n2;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}