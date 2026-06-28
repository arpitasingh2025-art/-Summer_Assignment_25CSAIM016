//Write a program to Check symmetric matrix.
#include <stdio.h>
int main() 
{
    int a[10][10];
    int i, j, n;
    int symmetric = 1;

    printf("Enter Size of Square Matrix: ");
    scanf("%d", &n);

    printf("Enter Elements of Matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }

    if (symmetric)
        printf("Matrix is Symmetric.\n");
    else
        printf("Matrix is NOT Symmetric.\n");

    return 0;
}