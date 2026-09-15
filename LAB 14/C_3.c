// Given  an  integer  array  nums  sorted  in  non-decreasing  order,  remove  the  duplicates  inplace  such  that 
// each unique element appears only once. The relative order of the elements should be kept the same. 
// Then return the number of unique elements in nums. 
// Consider the number of unique elements of nums to be k, to get accepted, you need to do the following 
// things:  
// Change the array nums such that the ƒrst k elements of nums contain the unique elements in the order 
// they were present in nums initially. The remaining elements of nums are not important as well as the 
// size of nums.  
// Return k. 

#include <stdio.h>

int main()
{
    int nums[100], n, i, k = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 1; i < n; i++)
    {
        if (nums[i] != nums[k - 1])
        {
            nums[k] = nums[i];
            k++;
        }
    }

    printf("Number of unique elements = %d\n", k);

    printf("Array after removing duplicates:\n");

    for (i = 0; i < k; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}