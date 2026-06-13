//Q1.
#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter The Number:");
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum==num)
    {
        printf("Number Is Perfect");
    }
    else
    {
        printf("Number Is Not Perfect");
    }
    return 0;
}