// 3.  Swap elements of two integer arrays using user define function.

#include <stdio.h>

void SwapArrays(int arr1[], int arr2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main()
{
    int size1, size2;

    printf("Enter size of array1 and array2 : ");
    scanf("%d %d", &size1, &size2);

    if (size1 != size2)
    {
        printf("Arrays should be of same size for proper swapping.");
        return 0;
    }

    int array1[size1], array2[size2];

    printf("Enter elements for array 1 : ");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter elements for array 2 : ");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &array2[i]);
    }

    SwapArrays(array1, array2, size1, size2);

    printf("Array 1 : ");
    for (int i = 0; i < size1; i++)
    {
        printf("%d ", array1[i]);
    }

    printf("\nArray 2 : ");
    for (int i = 0; i < size1; i++)
    {
        printf("%d ", array2[i]);
    }
}