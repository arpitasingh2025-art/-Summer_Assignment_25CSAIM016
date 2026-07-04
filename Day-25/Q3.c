//q3
#include <stdio.h>

int main() {
    int a[100],n,i,key,low,high,mid;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high) 
    {
        mid=(low+high)/2;
        if(a[mid]==key) 
        {
            printf("%d is at loaction %d",key,mid+1);
        }
        else if(key<a[mid]) 
        {
            high=mid-1;
        }
        else 
        {
            low=mid+1;
        }
    }
    if(low>high)
    {
        printf("Element not found");
    }

    return 0;
}