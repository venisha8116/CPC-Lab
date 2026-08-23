// 3. Print numbers between two given numbers which are divisible by 2

#include <stdio.h>

int main()
{
	int first;
	int second;
	int temporary;
	int number;

	// Read the two limits of the range
	printf("Enter two numbers: ");
	scanf("%d %d", &first, &second);

	// Swap the limits if they were entered in reverse order
	if(first > second)
	{
		temporary = first;
		first = second;
		second = temporary;
	}

	printf("Numbers divisible by 2: ");
	number = first;

	// Check every number from the first limit to the second limit
	while(number <= second)
	{
		// A remainder of 0 means that the number is divisible by 2
		if(number % 2 == 0)
		{
			printf("%d ", number);
		}

		// Move to the next number in the range
		number++;
	}

	return 0;
}