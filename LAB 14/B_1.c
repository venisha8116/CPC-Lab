// 1.  Count numbers higher than the average of an array.

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int sum = 0, count = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = (float)sum / n;

    for (i = 0; i < n; i++)
    {
        if (a[i] > avg)
            count++;
    }

    printf("Average = %.2f\n", avg);
    printf("Numbers higher than average = %d\n", count);

    return 0;
}