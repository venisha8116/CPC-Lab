// 1. Print sum of series 1 - 2 + 3 - 4 + 5 - 6 + 7 ... n

#include <stdio.h>

int main()
{
    int n;
    int number = 1;
    int sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while(number <= n)
    {
        if(number % 2 == 0)
            sum -= number;
        else
            sum += number;

        number++;
    }

    printf("Sum = %d", sum);

    return 0;
}
