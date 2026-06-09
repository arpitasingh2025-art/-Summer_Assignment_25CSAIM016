// Q4
#include <stdio.h>

int main() {
    int n,i=0;
    printf("enter the number");
    scanf("%d",&n);
    if(n==0)
    {
        printf("only one digit");
    }
    else
    {
        while(n!=0)
        {
            n=n/10;
            i++;
        }
        printf("no.of digits%d",i);
    }
    

    return 0;
}