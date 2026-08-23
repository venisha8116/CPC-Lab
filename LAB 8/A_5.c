// 5. Read 10 numbers and count the odd and even numbers

#include <stdio.h>

int main()
{
	int number;
	int count = 1;
	int even = 0;
	int odd = 0;

	// Read exactly 10 numbers from the user
	while(count <= 10)
	{
		printf("Enter number %d: ", count);
		scanf("%d", &number);

		// A remainder of 0 means that the number is even
		if(number % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}

		count++;
	}

	printf("Even numbers: %d\n", even);
	printf("Odd numbers: %d", odd);

	return 0;
}