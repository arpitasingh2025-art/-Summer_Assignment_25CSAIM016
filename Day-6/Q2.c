// binary to decimal
#include <stdio.h>
#include <math.h>
int main() {
    int n,i,r,d=0,dec=0;
    printf("enter the binary number");
    scanf("%d",&n);
    i=0;
    while (n>0)
    {
        r=n%10;
        dec=(r*pow(2,i))+dec;
        n=n/10;
        i++;
    }
printf("%d",dec);
return 0;
}