// 1. Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed). specifically, ans is the concatenation of two
// nums arrays.
// Return the array ans.
// Input: nums = [1,2,1]
// Output: [1,2,1,1,2,1]
// Explanation: The array ans is formed as follows:
// - ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
// - ans = [1,2,1,1,2,1]

#include<stdio.h>
#include<stdlib.h>

int *makeArray(int n){
	int *arr = (int *)malloc(n*sizeof(int));

	if(arr == NULL){
		return NULL;
	}

	return arr;
}

int *CalculateAnsArray(int arr[], int size){
	int *ans = (int *)malloc((2*size)*sizeof(int));

	if(ans == NULL){
		return NULL;
	}

	for(int i = 0; i<size ; i++){
		ans[i] = arr[i];
		ans[i+size] = arr[i];
	}
		
	return ans;
}

int main(){
	int size;
	printf("Enter size of array : ");
	scanf("%d", &size);

	int *array = makeArray(size);

	if(array == NULL){
		printf("Memory allocation failed.\n");
		return 0;
	}

	for(int i = 0; i<size ; i++){
		printf("Enter number %d : ", i+1);
		scanf("%d", &array[i]);
	}

	int *ans = CalculateAnsArray(array, size);

	for(int i = 0; i<2*size ; i++){
		printf("%d ", ans[i]);
	}

	free(array);
	free(ans);
	return 0;
}