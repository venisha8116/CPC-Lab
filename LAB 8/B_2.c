// 2. Print integers greater than 100 and less than 200 that are
// divisible by 7 but not divisible by 5

#include <stdio.h>

int main()
{
	int number = 101;

	// Check every integer strictly between 100 and 200
	while(number < 200)
	{
		// The number must be divisible by 7 and not by 5
		if(number % 7 == 0 && number % 5 != 0)
		{
			printf("%d ", number);
		}
		number++;
	}

	return 0;
}