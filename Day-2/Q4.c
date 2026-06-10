// Q4
#include <stdio.h>

int main() {
    int r,s=0,n,og;
    printf("enter a number");
    scanf("%d",&n);
    og=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(og==s)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not a pallindrome number");
    }
   
    return 0;
}