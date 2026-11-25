// 2. Calculate the sum of n numbers entered by the user using malloc().

#include<stdio.h>
#include<stdlib.h>

int main(){
	int size, sum = 0;
	printf("Enter n : ");
	scanf("%d", &size);

	int *nums = (int *)malloc(size*sizeof(int));

	if(nums == NULL){
		printf("Memory allocation failed.\n");
		return 0;
	}

	for(int i = 0; i<size; i++){
		printf("Enter number %d : ", i+1);
		scanf("%d", &nums[i]);
	}

	for(int i = 0 ; i<size ; i++){
		sum += nums[i];
	}

	printf("Sum of %d numbers : %d\n", size, sum);

	free(nums);
	return 0;
}