// Q2
#include <stdio.h>
int main(){
int c,i,a[10],f=0;
printf("enter the elements");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the elements whose frequency is to searched");
scanf("%d",&c);
for(i=0;i<5;i++)
{
    if(c==a[i])
    {
        f++;
    }
    
}
printf("%d",f);
return 0;
}