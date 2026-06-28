//Write a program to Transpose matrix.
#include <stdio.h>
int main() 
{
    int a[10][10], t[10][10];
    int i, j, r, col;

    printf("Enter Rows and Columns: ");
    scanf("%d %d", &r, &col);

    printf("Enter Elements of Matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < col; j++)
            t[j][i] = a[i][j];

    printf("Original Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < col; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("Transposed Matrix:\n");
    for (i = 0; i < col; i++) {
        for (j = 0; j < r; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }

    return 0;
}