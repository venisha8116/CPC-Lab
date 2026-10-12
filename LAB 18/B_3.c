#include <stdio.h>

int isPrime(int n)
{
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int start, end, i, temp;

    printf("Enter starting and ending numbers: ");
    scanf("%d %d", &start, &end);

    if (start > end)
    {
        temp = start;
        start = end;
        end = temp;
    }

    for (i = start; i <= end; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}