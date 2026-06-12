// Q4 
#include <stdio.h>
#include <math.h>
int main(){
    int n, r, digit, power, m, og, s, e;
    printf("Enter start");
    scanf("%d",&s);
    printf("Enter end");
    scanf("%d",&e);
    for(n = s; n <= e; n++)
    {
        digit=0;
        power=0;
        m=n;
        og=n;
        while(m > 0)
        {
            digit++;
            m/=10;
        }
        m=n;
        while(m>0)
        {
            r=m%10;
            power+=pow(r,digit);
            m/=10;
        }
        if(og==power)
        {
            printf("%d",og);
        }
    }

    return 0;
}