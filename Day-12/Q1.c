// Q1
#include <stdio.h>
int pal(int l);
int main() {
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    pal(n);
    return 0;
}
int pal(int l) 
{
    int r,s=0,og;
    og=l;
    while(l>0)
    {
        r=l%10;
        s=s*10+r;
        l=l/10;
    }
    if(s==og)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not palindrome number");
    }
}