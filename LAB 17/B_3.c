// 3. Add two matrices using pointers

#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter the order of the matrices : ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols], b[rows][cols], c[rows][cols];
    int i, j;
    int *p1, *p2, *p3;

    printf("Enter elements of first matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    p1 = &a[0][0];
    p2 = &b[0][0];
    p3 = &c[0][0];

    // Matrix elements are stored continuously in memory in row-major order
    // 3 x 3 matrix has 9 elements, so we can use one loop from 0 to 8
    // *(p + i) accesses each matrix element one by one
    for (i = 0; i < 9; i++)
    {
        *(p3 + i) = *(p1 + i) + *(p2 + i);
    }

    printf("Sum of matrices:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}