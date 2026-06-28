//Write a program to Find row-wise sum.
#include <stdio.h>
int main() 
{
    int a[10][10];
    int i, j, r, c, sum;

    printf("Enter Rows and Columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter Elements of Matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("Row-wise Sum:\n");
    for (i = 0; i < r; i++)
    {
        sum = 0;
        for (j = 0; j < c; j++)
            sum += a[i][j];
        printf("Row %d Sum = %d\n", i + 1, sum);
    }

    return 0;
}