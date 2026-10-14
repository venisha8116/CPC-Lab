// 2.  Pass an array in function to print array elements. 

#include<stdio.h>

void PrintUsingRecursion(int arr[], int size, int i){
    if (i == size)
    {
        return;
    }

    printf("%d ", arr[i]);

    PrintUsingRecursion(arr, size, i+1);
}

void PrintUsingIteration(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int size;
    printf("Enter size of an array : ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i<size; i++){
        printf("Enter element : ");
        scanf("%d", &arr[i]);
    }

    printf("Using Recursion : \n");
    PrintUsingRecursion(arr, size, 0);

    printf("Using Iteration : \n");
    PrintUsingIteration(arr, size);
}