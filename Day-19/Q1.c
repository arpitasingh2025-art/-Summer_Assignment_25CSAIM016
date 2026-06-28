//Write a program to Add matrices.
#include <stdio.h>
int main() 
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, r, c;

    printf("Enter Rows and Columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter Elements of Matrix A:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter Elements of Matrix B:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("Sum of Matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}