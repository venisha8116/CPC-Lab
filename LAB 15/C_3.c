// 3. Given an integer array nums and an integer val, remove all occurrences of val in nums in-
// place. The order of the elements may be changed. Then return the number of elements in 
// nums which are not equal to val.

// Consider the number of elements in nums which are not equal to val be k, to get accepted, 
// you need to do the following things:

    // Change the array nums such that the first k elements of nums contain the elements which 
    // are not equal to val. The remaining elements of nums are not important as well as the size 
    // of nums.
    // Return k.

#include<stdio.h>
int main(){
    int i,j,k,size,value;

    printf("How many elements do you want to enter?:");
    scanf("%d",&size);

    int arr[size];

    for(i=0;i<size;i++){
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }

    printf("What value do you want to check?:");
    scanf("%d",&value);

    for(i=0;i<size;i++){
        if(arr[i]==value){
            for(j=i;j<size;j++){
                arr[j]=arr[j+1];
            }
            size--;
            i--;
        }
    }
    
    printf("Array after removing %d:\n",value);
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}