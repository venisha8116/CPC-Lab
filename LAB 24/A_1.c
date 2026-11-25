// 1. Allocate and de-allocate memory for int, char and float variable at run time. 

#include<stdio.h>
#include<stdlib.h>

int main(){
	// Using malloc
	int *integer_var = (int *)malloc(sizeof(int));
	char *char_var = (char *)malloc(sizeof(char));
	float *float_var = (float *)malloc(sizeof(float));

	if(integer_var == NULL){
		printf("integer_var Memory not allocated.");
		return 0;
	}

	if(char_var == NULL){
		printf("char_var Memory not allocated.");
		return 0;
	}

	if(float_var == NULL){
		printf("float_var Memory not allocated.");
		return 0;
	}

	*integer_var = 18;
	printf("Integer value : %d, Integer Address : %p, Space Assigned : %d bytes", *integer_var, integer_var, (int)sizeof(*integer_var));

	*char_var = 'A';
	printf("\nCharacter value : %c, Character Address : %p, Space Assigned : %d bytes", *char_var, char_var, (int)sizeof(*char_var));

	*float_var = 29.643522;
	printf("\nFloat value : %.6f, Float Address : %p, Space Assigned : %d bytes\n", *float_var, float_var, (int)sizeof(*float_var));

	free(integer_var);
	integer_var = NULL;

	free(char_var);
	char_var = NULL;

	free(float_var);
	float_var = NULL;

	// Using calloc
	integer_var = (int *)calloc(5, sizeof(int));

	if(integer_var == NULL){
		printf("integer_var Memory not allocated.");
		return 0;
	}
	
	for(int i = 0; i<5 ; i++){
		printf("Enter number : ");
		scanf("%d", &integer_var[i]);
	}

	printf("\nSpace assigned in block : %d, Space assigned per element : %d", 5*(int)sizeof(*integer_var), (int)sizeof(*integer_var));

	printf("\nAssigned values : \n");
	for(int i = 0; i<5 ; i++){
		printf("%d ", integer_var[i]);
	}

	// Using realloc
	int *temp_int = (int *)realloc(integer_var, 10 * sizeof(int));
	if (temp_int == NULL) {
		printf("Reallocation failed!\n");
		free(integer_var);
		return 1;
	}
	integer_var = temp_int;

	printf("\nExpanding Integer Block to 10...\n");
	for (int i = 5; i < 10; i++) {
		printf("Enter new integer %d : ", i + 1);
		scanf("%d", &integer_var[i]);
	}

	printf("After realloc  -> Address: %p | Total Space: %d bytes\n", integer_var, 10 * (int)sizeof(*integer_var));
	printf("All 10 integers : ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", integer_var[i]);
	}
	printf("\n\n");

	free(integer_var);
	integer_var = NULL;

	char_var = (char *)calloc(5, sizeof(char));
	if(char_var == NULL){
		printf("char_var Memory not allocated.\n");
		return 0;
	}

	printf("\n--- Character Block (calloc) ---\n");
	for(int i = 0; i < 5; i++){
		printf("Enter character %d : ", i + 1);
		scanf(" %c", &char_var[i]); // Leading space skips leftover newline '\n'
	}

	printf("Space assigned in block : %d bytes, Space assigned per element : %d bytes\n", 5 * (int)sizeof(*char_var), (int)sizeof(*char_var));
	printf("Assigned character values : ");
	for(int i = 0; i < 5; i++){
		printf("%c ", char_var[i]);
	}
	printf("\n");

	char *temp_char = (char *)realloc(char_var, 10 * sizeof(char));
	if (temp_char == NULL) {
		printf("Reallocation failed!\n");
		free(char_var);
		return 1;
	}
	char_var = temp_char;

	printf("\nExpanding Character Block to 10...\n");
	for (int i = 5; i < 10; i++) {
		printf("Enter new character %d : ", i + 1);
		scanf(" %c", &char_var[i]);
	}

	printf("After realloc  -> Address: %p | Total Space: %d bytes\n", char_var, 10 * (int)sizeof(*char_var));
	printf("All 10 characters : ");
	for (int i = 0; i < 10; i++) {
		printf("%c ", char_var[i]);
	}
	printf("\n\n");

	free(char_var);
	char_var = NULL;

	float_var = (float *)calloc(5, sizeof(float));
	if(float_var == NULL){
		printf("float_var Memory not allocated.\n");
		return 0;
	}

	printf("\n--- Float Block (calloc) ---\n");
	for(int i = 0; i < 5; i++){
		printf("Enter float %d : ", i + 1);
		scanf("%f", &float_var[i]);
	}

	printf("Space assigned in block : %d bytes, Space assigned per element : %d bytes\n", 5 * (int)sizeof(*float_var), (int)sizeof(*float_var));
	printf("Assigned float values : ");
	for(int i = 0; i < 5; i++){
		printf("%.2f ", float_var[i]);
	}
	printf("\n");

	float *temp_float = (float *)realloc(float_var, 10 * sizeof(float));
	if (temp_float == NULL) {
		printf("Reallocation failed!\n");
		free(float_var);
		return 1;
	}
	float_var = temp_float;

	printf("\nExpanding Float Block to 10...\n");
	for (int i = 5; i < 10; i++) {
		printf("Enter new float %d : ", i + 1);
		scanf("%f", &float_var[i]);
	}

	printf("After realloc  -> Address: %p | Total Space: %d bytes\n", float_var, 10 * (int)sizeof(*float_var));
	printf("All 10 floats : ");
	for (int i = 0; i < 10; i++) {
		printf("%.2f ", float_var[i]);
	}
	printf("\n");

	free(float_var);
	float_var = NULL;

	return 0;
}
