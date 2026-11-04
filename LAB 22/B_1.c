// 1. Print contents of file in reverse order. 

#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fptr; // Declare a file pointer

	fptr = fopen("exampleB1.txt", "r"); // Open the file in read mode

	fseek(fptr, 0, SEEK_END); // Move the cursor to the end of the file

	for(long pos = ftell(fptr) - 1; pos >= 0; pos--){
		fseek(fptr, pos, SEEK_SET); // Move the cursor to the current position
		char ch = fgetc(fptr); // Read the character at the current position
		printf("%c", ch); // Print the character
	}

	fclose(fptr); // Close the file

	return 0;
}