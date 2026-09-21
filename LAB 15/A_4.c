// 4. Search element in array. 

#include<stdio.h>
int main(){
    int size,i,j,count=0;

    printf("How many elements do you want to store? ");
    scanf("%d",&size);

    int arr[size];

    for(i=0;i<size;i++){
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }

    printf("What are you looking for? ");
    scanf("%d",&j);

    for(i=0;i<size;i++){
        if(arr[i]==j){
            printf("Your element is stored in array at index %d",i);
            count++;
        }
    }
    if(count==0){
            printf("The element that you are looking for is not stored in this array.");
    }
}