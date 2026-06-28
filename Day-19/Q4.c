//Write a program to Find diagonal sum.
#include <stdio.h>
int main() 
{
    int a[10][10];
    int i, j, n;
    int FirstDiagonal = 0, SecondDiagonal = 0;

    printf("Enter Size of Square Matrix: ");
    scanf("%d", &n);

    printf("Enter Elements of Matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
    {
        FirstDiagonal += a[i][i];
        SecondDiagonal += a[i][n - 1 - i];
    }

    printf("Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("Principal Diagonal Sum: %d\n", FirstDiagonal);
    printf("Secondary Diagonal Sum: %d\n", SecondDiagonal);
    printf("Total Diagonal Sum    : %d\n", FirstDiagonal + SecondDiagonal);

    return 0;
}