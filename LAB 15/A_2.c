// 2.  Count total number of negative elements in array. 

#include<stdio.h>
int main(){
    int size,i,count=0;

    printf("How many elements do you want to enter?:");
    scanf("%d",&size);

    int arr[size];

    for(i=0;i<size;i++){
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++){
        if(arr[i]<0){
            count++;
        }
    }
    printf("Total Negative Elements = %d",count);
}