// 5. Find factors of the given number

#include <stdio.h>

int main()
{
    int number;
    int divisor = 1;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if(number <= 0)
    {
        printf("Enter a positive number.");
        return 0;
    }

    printf("Factors: ");
    while(divisor <= number)
    {
        if(number % divisor == 0)
            printf("%d ", divisor);
        divisor++;
    }

    return 0;
}
