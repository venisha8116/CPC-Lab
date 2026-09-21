// 2. Reverse elements of an array without using second array. 

#include<stdio.h>
int main(){
    int size,i,j,temp;

    printf("How many elements do you want to enter?:");
    scanf("%d",&size);

    int arr[size];

    for(i=0;i<size;i++){
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size/2;i++){
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }

    printf("Reversed Array : ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}