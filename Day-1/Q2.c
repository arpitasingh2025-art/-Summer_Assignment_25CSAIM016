// Q2
#include <stdio.h>

int main() {
    int n,i,pro=1;
    printf ("enter the number of which u want the table");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        pro=n*i;
        printf("%d×%d=%d",n,i,pro);
        printf("\n");
        
    }
    return 0;
}