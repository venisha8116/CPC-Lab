// 1. Print each number and its square root from 0 to 9

#include <math.h>
#include <stdio.h>

int main()
{
	int number = 0;

	// Repeat for numbers 0 through 9
	while(number <= 9)
	{
		printf("%d -> %.2f\n", number, sqrt(number));
		number++;
	}

	return 0;
}