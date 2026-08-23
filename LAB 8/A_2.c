// 2. Print odd numbers between 1 to n using while and do while loops

#include <stdio.h>

int main()
{
	int n;
	int i = 1;

	// Read the upper limit
	printf("Enter n: ");
	scanf("%d", &n);

	printf("Odd numbers using while loop: ");
	// Print odd numbers from 1 to n
	while(i <= n)
	{
		printf("%d ", i);

		// Move to the next odd number
		i += 2;
	}

	printf("\nOdd numbers using do while loop: ");
	i = 1;
	// A do while loop must run at least once, so check that n is valid first
	if(n >= 1)
	{
		do
		{
			// Display the current odd number
			printf("%d ", i);

			// Move to the next odd number
			i += 2;
		} while(i <= n);
	}

	return 0;
}