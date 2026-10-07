// 1.  Generate Fibonacci series of N given number using function name fibbo() without recursion.

#include <stdio.h>

int fibbo(int n)
{
    int first = 0, second = 1, next;

    printf("Fibonacci series of %d terms: ", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", first); // Printing the current term (nth term)

        next = first + second; // Calculating the next term (n+1)th term
        first = second;       // Moving a to the next term -> the next term now becomes the current term
        second = next;     // Moving b to the new term -> the new term becomes the next term
    }
    return 0;
}

int main()
{
    int n;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    fibbo(n);
}
