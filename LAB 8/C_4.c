// 4. Multiply two numbers without using the * operator

#include <stdio.h>

int main()
{
	int first;
	int second;
	int count;
	int product = 0;
	int negative = 0;

	printf("Enter two numbers: ");
	scanf("%d %d", &first, &second);

	// Make both numbers positive and remember whether the result is negative
	if(first < 0)
	{
		first = -first;
		negative = !negative;
	}
	if(second < 0)
	{
		second = -second;
		negative = !negative;
	}

	// Add the first number repeatedly, once for every count of the second
	count = 0;
	while(count < second)
	{
		product += first;
		count++;
	}

	if(negative)
	{
		product = -product;
	}

	printf("Product = %d", product);

	return 0;
}