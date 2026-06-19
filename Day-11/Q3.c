//Q3
#include<stdio.h>
int prime(int a)
{
    int r;
    if (a<=1)
    {
        return 0;
    }
    else
    for(int i=2;i<a;i++)
    {
        r= a%i;
        if(r==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int Num;
    printf("Enter The Number: \n");
    scanf("%d",&Num);
    if (prime(Num))
    {
        printf("Number Is Prime.");
    }
    else
    {
        printf("Number Is Not Prime.");
    }
    return 0;
}