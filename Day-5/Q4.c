//Write a program to Find largest prime factor
#include<stdio.h>
int main()
{
    int num, i, l = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
     if(num < 0)
        num = -num;
    while(num % 2 == 0)
    {
        l = 2;
        num = num / 2;
    }
     for(i = 3; i * i <= num; i = i + 2)
    {
        while(num % i == 0)
        {
            l = i;
            num = num / i;
        }
    }
     if(num > 2)
        l = num;
    
    printf("The Largest prime factor is: %d\n", l);
    
    return 0;
}