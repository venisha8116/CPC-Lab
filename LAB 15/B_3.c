// 3. Swap first element with last, second to second last and so on. 

#include<stdio.h>
int main(){
    int size,i,temp;

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

    printf("Swapped Array : ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}