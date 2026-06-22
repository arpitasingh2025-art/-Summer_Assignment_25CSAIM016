// Q1
#include <stdio.h>
int main(){
int c, a[10],i;
printf("enter the elements");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the elements to be searched");
scanf("%d",&c);
for(i=0;i<5;i++)
{
    if(c==a[i])
    {
        printf("%d",i+1);
    }
}
return 0;
}