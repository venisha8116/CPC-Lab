// 2. Insert new value in the sorted array.

#include <stdio.h>
int main()
{
    int size, i, j, new;

    printf("How many elemnets do you want to enter at first?:");
    scanf("%d", &size);

    // Increasing size by 1 to accomodate new element
    size = size + 1;

    int arr[size];

    for (i = 0; i < size - 1; i++)
    {
        printf("Enter element:");
        scanf("%d", &arr[i]);
    }

    printf("Where do you want to enter your new element?:");
    scanf("%d", &j);

    if(j<0 || j>=size){
        printf("Invalid index. Please enter an index between 0 and %d", size-1);
        return 1;
    }

    printf("Enter new element:");
    scanf("%d", &new);

    // If the new element is being inserted in between existing elements, then shift the existing elements to right to make space for new element.
    for (i = size - 1; i > j; i--)
    {
        arr[i] = arr[i - 1];
    }

    // After space is available, store the element in the vacated space
    arr[j] = new;

    printf("Array after inserting new element:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}