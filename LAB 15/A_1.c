// 1.  Copy all elements of one array to another. 

#include<stdio.h>
int main(){
    int size,i,j;

    printf("What is the size of the array?:");
    scanf("%d",&size);

    int arr1[size];
    int arr2[size];

    printf("Enter the elements of the original array:\n");
    for(i=0;i<size;i++){
        printf("Enter element:");
        scanf("%d",&arr1[i]);
    }

    for(i=0;i<size;i++){
        arr2[i] = arr1[i];
    }

    printf("\nCopied Array : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr2[i]);
    }
}