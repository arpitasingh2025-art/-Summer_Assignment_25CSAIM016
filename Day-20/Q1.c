//Write a program to Multiply matrices.
#include <stdio.h>
int main() 
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, k, r1, c1, r2, c2;

    printf("Enter Rows and Columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter Rows and Columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Multiplication Not Possible!\n");
        printf("Columns of A must equal Rows of B.\n");
        return 0;
    }

    printf("Enter Elements of Matrix A:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter Elements of Matrix B:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    printf("Matrix A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("Matrix B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    printf("Product of Matrices:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}