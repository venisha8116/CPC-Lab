#ifndef NUMBERLIB_H
#define NUMBERLIB_H

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

int isArmstrong(int n)
{
    int temp = n, digits = 0, digit, sum = 0;
    int i, power;

    if (n < 0)
        return 0;

    if (n == 0)
        return 1;

    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        power = 1;

        for (i = 0; i < digits; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    }

    return sum == n;
}

int isPerfect(int n)
{
    int i, sum = 0;

    if (n < 1)
        return 0;

    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    return sum == n;
}

#endif