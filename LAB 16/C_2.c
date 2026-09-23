// 2. Print the upper triangular matrix.

// upper triangular matrices exist for square matrices only
#include <stdio.h>
int main()
{
    int size, i, j;

    printf("Enter the order of your matrix:");
    scanf("%d", &size);

    int matrix[size][size];
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("Enter element row-%d col-%d : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The upper triangular matrix is:\n");
    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}