// 4. Allocate dynamic memory for structure variable.

#include<stdio.h>
#include<stdlib.h>

struct Add{
	int n1;
	int n2;
	int sum;
};

int main(){
	struct Add *eg1 = (struct Add *)malloc(sizeof(struct Add));

	if(eg1 == NULL){
		printf("Memory allocation failed.\n");
		return 0;
	}

	eg1->n1 = 10;
	eg1->n2 = 20;
	eg1->sum = eg1->n1 + eg1->n2;

	printf("Sum of %d and %d is : %d\n", eg1->n1, eg1->n2, eg1->sum);
	printf("Address of eg1 : %p\n", eg1);
	printf("Size of structure variable : %d bytes\n", (int)sizeof(*eg1));

	free(eg1);
	return 0;
}