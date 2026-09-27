// 2. Swap two arrays using pointers

#include <stdio.h>

int main()
{
    int a[100], b[100];
    int n, i, temp;
    int *p1, *p2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    p1 = a;
    p2 = b;

    for(i = 0; i < n; i++)
    {
        temp = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp;
    }

    printf("First array after swapping:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p1 + i));
    }

    printf("\nSecond array after swapping:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p2 + i));
    }

    return 0;
}