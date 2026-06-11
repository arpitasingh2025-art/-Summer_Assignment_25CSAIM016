//Q2
#include <stdio.h>

int main() {
    int c=1,i,j,s,e;
    printf("enter start");
    scanf("%d",&s);
    printf("enter end");
    scanf("%d",&e);
    for(i=s;i<=e;i++)
    {
        if(i<2)
        continue;
    c=1;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            c=0;
            break;
        }
    }
    if(c==1)
    {
        printf("%d ",i);
    }
    }

    return 0;
}