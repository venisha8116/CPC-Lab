// 4.  Perform Addition of two matrices.

#include <stdio.h>
int main()
{
    int i, j, rows, cols;

    printf("Enter the order of your matrix:");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols];
    int matrix2[rows][cols];

    printf("For matrix1:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter element for row-%d col-%d : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("For matrix2:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter element for row-%d col-%d : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    int addedMatrix[rows][cols];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            addedMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The added matrix is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", addedMatrix[i][j]);
        }
        printf("\n");
    }
}