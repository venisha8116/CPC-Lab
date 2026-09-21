// 1. Delete all duplicate elements from an array.

#include <stdio.h>
int main()
{
    int size, i, j, k;

    printf("What is the size of your array?:");
    scanf("%d", &size);

    int arr[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter elements:");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {

        // Started from next element and check for duplicates
        for (j = i + 1; j < size; j++)
        {

            // If duplicate is found, then shift all the next elements to the left by one position
            if (arr[i] == arr[j])
            {

                // Shifting left
                for (k = j; k < (size - 1); k++)
                {
                    arr[k] = arr[k + 1];
                }

                // After shifting is done, reduce the size by 1 so that the last element is left unconsidered in further iterations.
                size--;

                // Check this position again because a new element has shifted here
                j--;
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}