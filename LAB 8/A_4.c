// 4. Print the sum of numbers from 1 to n

#include <stdio.h>

int main()
{
	int n;
	int number = 1;
	int sum = 0;

	// Read the upper limit
	printf("Enter n: ");
	scanf("%d", &n);

	// Add every number from 1 to n
	while(number <= n)
	{
		sum += number;
		number++;
	}

	printf("Sum = %d", sum);

	return 0;
}