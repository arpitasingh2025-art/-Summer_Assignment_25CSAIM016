// Q1
#include <stdio.h>

int main() {
    int c=0,i,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            c+=1;
        }
    }
    if(c==0)
    {
        printf("prime number");
    }
    else
    {
        printf("not a prime number");
    }

    return 0;
}