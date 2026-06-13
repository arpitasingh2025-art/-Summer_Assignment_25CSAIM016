//Q3.
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter The Number:");
    scanf("%d",&num);
    printf("The Factors Are: ",num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        printf("%d ",i);
    }
    return 0;
}