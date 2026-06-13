//Q2.
#include<stdio.h>
int main()
{
    int num,r,fact,sum=0;
    printf("Enter The Number:");
    scanf("%d",&num );
    int original=num;
    while(num > 0)
    {
     r=num%10;
     fact=1;
     for(int i=1;i<=r;i++)
     {
        fact=fact*i;
     }
     sum=sum+fact;
     num=num/10;
    }
    if (sum == original)
    {
        printf("Entered Number Is Strong Number.");
    }
    else
    {
        printf("Entered Number Is Not Strong Number.");
    }
    return 0;
}