// Q3
#include <stdio.h>

int main() {
    int a[100], n, i;
    int l, sl;
    printf("Enter number of elements");
    scanf("%d", &n);
    printf("Enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=sl;
    l=a[0];
    for(i=1;i<n;i++) 
    {
        if(a[i]>l) 
        {
            sl=l;
            l=a[i];
        }
        else if(a[i] > sl&& a[i] != l) {
            sl=a[i];
        }
    }

    printf("Second largest element %d",sl);
return 0;
}