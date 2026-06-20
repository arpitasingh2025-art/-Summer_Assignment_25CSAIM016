// Q2
#include <stdio.h>
#include <math.h>
int arm(int l);
int main() {
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    arm(n);
    return 0;
}
int arm(int l) 
{
    int r,power=0,og,digit=0,m;
    og=l;
    m=l;
    while(l>0)
    {
        r=l%10;
        digit+=1;
        l=l/10;
    }
    while(m>0)
    {
        r=m%10;
        power+=pow(r,digit);
        m=m/10;
    }
    if(power==og)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong number");
    }
}