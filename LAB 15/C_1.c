// 1. Find two largest elements in a one dimensional array.

#include <stdio.h>
int main()
{
    int i, j, k, max1, max2, size;

    printf("How many elements do you want to compare? ");
    scanf("%d", &size);

    int arr[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter elements:");
        scanf("%d", &arr[i]);
    }

    // Finding the first maximum element
    max1 = arr[0];

    for (i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max1 = arr[i];
        }
    }

    printf("First maximum element = %d\n", max1);

    // Deleting max1 from the array elements
    for (i = 0; i < size; i++)
    {

        // On finding the max1 element, shift all the next elements to the left by one position
        if (arr[i] == max1)
        {
            for (j = i; j < (size - 1); j++)
            {
                arr[j] = arr[(j + 1)];
            }

            // After shifting is done, reduce the size by 1 so that the last element is left unconsidered in further iterations.
            size--;

            // Check this position again because a new element has shifted here
            j--;
        }
    }

    // Finding the max2 element from the remaining elements
    max2 = arr[0];

    for (i = 0; i < size; i++)
    {
        if (arr[i] > max2)
        {
            max2 = arr[i];
        }
    }
    printf("Second Maximum Element = %d", max2);
}