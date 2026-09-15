// 2. Find missing numbers of sequence using array.(in a sequence 1,2,4,5,7,8,10, Missing numbers are 3,6,9)

#include <stdio.h>

int main()
{
    int a[100], n, i, expected;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Missing numbers: ");

    for (i = 1; i < n; i++)
    {
        expected = a[i - 1] + 1;

        while (expected < a[i])
        {
            printf("%d ", expected);
            expected++;
        }
    }

    return 0;
}