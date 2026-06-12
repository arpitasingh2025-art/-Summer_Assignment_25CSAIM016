// Q3
#include <stdio.h>
#include <math.h>
int main() {
    int n,r,digit=0,power=0,m,og;
    printf("enter the number");
    scanf("%d",&n);
    m=n;
    og=n;
    while(n>0)
    {
        r=n%10;
        digit+=1;
        n=n/10;
    }
    while(m>0)
    {
        r=m%10;
        power+=pow(r,digit);
        m=m/10;
    }
    if(og==power)
    {
        printf("armstrong no.");
    }
    else
    {
        printf("not Armstrong no.");
    }
    
    
    return 0;
}