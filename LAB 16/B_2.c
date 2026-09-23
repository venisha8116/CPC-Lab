// 2.  Perform Multiplication of two matrices.

#include <stdio.h>
int main()
{
    int i, j, k, rows1, cols1, rows2, cols2;

    printf("Enter the order of your matrix 1:");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the order of your matrix 2:");
    scanf("%d %d", &rows2, &cols2);

    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];

    if (cols1 != rows2)
    {
        printf("Matrix multiplication is not possible.");
        return 0;
    }

    printf("For matrix1:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            printf("Enter element for row-%d col-%d : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("For matrix2:\n");
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            printf("Enter element for row-%d col-%d : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    int productMatrix[rows1][cols2];

    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            productMatrix[i][j] = 0;

            for (k = 0; k < cols1; k++)
            {
                productMatrix[i][j] =
                    productMatrix[i][j] + matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("The added matrix is:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            printf("%d ", productMatrix[i][j]);
        }
        printf("\n");
    }
}