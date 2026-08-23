// 2. Print the sum of the series 1 + 4 + 9 + 16 + ... + n^2

#include <stdio.h>

int main()
{
	int n;
	int number = 1;
	int sum = 0;

	// Read the number of terms in the series
	printf("Enter n: ");
	scanf("%d", &n);

	// Add the square of every number from 1 to n
	while(number <= n)
	{
		sum += number * number;
		number++;
	}

	printf("Sum = %d", sum);

	return 0;
}