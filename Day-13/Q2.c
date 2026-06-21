// Q2
#include <stdio.h>

int main() {
    int a[100],n,i,sum=0,avg;
    printf("no. of elements");
    scanf("%d",&n);
    printf("enter nos ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        sum+=a[i];
    }
    printf("\n");
    printf("%d",sum);
    avg=sum/n;
    printf("\n");
    printf("%d",avg);
return 0;
}