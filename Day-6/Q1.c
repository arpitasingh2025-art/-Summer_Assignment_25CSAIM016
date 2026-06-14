// decimal to binary
#include <stdio.h>
#include <math.h>
int main() {
    int n,i=0,r,bin=0;
    printf("enter the decimal number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%2;
        bin+=r*pow(10,i);
        n=n/2;
        i++;
    }
    printf("%d",bin);
return 0;
}