// 3. Print the first 50 numbers in the series 1, 4, 7, 10, ...

#include <stdio.h>

int main()
{
	int number = 1;
	int count = 1;

	// Print 50 terms, increasing each term by 3
	while(count <= 50)
	{
		printf("%d ", number);
		number += 3;
		count++;
	}

	return 0;
}