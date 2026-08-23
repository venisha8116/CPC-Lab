// 3. Divide two numbers without using / or % operators

#include <stdio.h>

int main()
{
	int dividend;
	int divisor;
	int quotient = 0;
	int remainder;

	printf("Enter the bigger number: ");
	scanf("%d", &dividend);
	printf("Enter the smaller number: ");
	scanf("%d", &divisor);

	if(divisor <= 0 || dividend < divisor)
	{
		printf("Enter positive numbers with the bigger number first.");
		return 0;
	}

	remainder = dividend;

	// Subtract the divisor until the remainder is smaller than it
	while(remainder >= divisor)
	{
		remainder -= divisor;
		quotient++;
	}

	printf("Quotient = %d\n", quotient);
	printf("Remainder = %d", remainder);

	return 0;
}