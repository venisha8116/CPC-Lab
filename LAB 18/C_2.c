#include <stdio.h>

void belowThousand(int n)
{
    if (n >= 100)
    {
        if (n / 100 == 1)
            printf("One");
        else if (n / 100 == 2)
            printf("Two");
        else if (n / 100 == 3)
            printf("Three");
        else if (n / 100 == 4)
            printf("Four");
        else if (n / 100 == 5)
            printf("Five");
        else if (n / 100 == 6)
            printf("Six");
        else if (n / 100 == 7)
            printf("Seven");
        else if (n / 100 == 8)
            printf("Eight");
        else if (n / 100 == 9)
            printf("Nine");

        printf(" Hundred");
        n = n % 100;

        if (n > 0)
            printf(" ");
    }

    if (n >= 20)
    {
        if (n / 10 == 2)
            printf("Twenty");
        else if (n / 10 == 3)
            printf("Thirty");
        else if (n / 10 == 4)
            printf("Forty");
        else if (n / 10 == 5)
            printf("Fifty");
        else if (n / 10 == 6)
            printf("Sixty");
        else if (n / 10 == 7)
            printf("Seventy");
        else if (n / 10 == 8)
            printf("Eighty");
        else if (n / 10 == 9)
            printf("Ninety");

        n = n % 10;

        if (n > 0)
            printf("-");
    }

    if (n > 0 || n == 0)
    {
        if (n == 0)
            printf("Zero");
        else if (n == 1)
            printf("One");
        else if (n == 2)
            printf("Two");
        else if (n == 3)
            printf("Three");
        else if (n == 4)
            printf("Four");
        else if (n == 5)
            printf("Five");
        else if (n == 6)
            printf("Six");
        else if (n == 7)
            printf("Seven");
        else if (n == 8)
            printf("Eight");
        else if (n == 9)
            printf("Nine");
        else if (n == 10)
            printf("Ten");
        else if (n == 11)
            printf("Eleven");
        else if (n == 12)
            printf("Twelve");
        else if (n == 13)
            printf("Thirteen");
        else if (n == 14)
            printf("Fourteen");
        else if (n == 15)
            printf("Fifteen");
        else if (n == 16)
            printf("Sixteen");
        else if (n == 17)
            printf("Seventeen");
        else if (n == 18)
            printf("Eighteen");
        else if (n == 19)
            printf("Nineteen");
    }
}

void amountInWords(int amount)
{
    int thousands = amount / 1000;
    int remainder = amount % 1000;

    if (amount == 0)
    {
        printf("Zero");
        return;
    }

    if (thousands > 0)
    {
        belowThousand(thousands);
        printf(" Thousand");

        if (remainder > 0)
            printf(" ");
    }

    if (remainder > 0)
        belowThousand(remainder);
}

int main()
{
    int amount;

    printf("Enter amount (0-99999): ");
    scanf("%d", &amount);

    if (amount < 0 || amount > 99999)
        printf("Enter an amount between 0 and 99999.\n");
    else
    {
        printf("Amount in words: ");
        amountInWords(amount);
        printf("\n");
    }

    return 0;
}