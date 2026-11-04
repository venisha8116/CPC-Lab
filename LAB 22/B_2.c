// 2. Capitalize first letter of each word in file.  

#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fptr; // Declare a file pointer
	char ch;

	fptr = fopen("exampleB2.txt", "r+"); // Open the file in read/write mode

	if(fptr == NULL){
		printf("Error opening file!\n");
		return 1; // Exit if file cannot be opened
	}

	int capitalizeNext = 1; // Flag to indicate if the next character should be capitalized

	while((ch = fgetc(fptr)) != EOF){
		if(capitalizeNext && ch >= 'a' && ch <= 'z'){
			ch -= 32; // Convert to uppercase
			fseek(fptr, -1, SEEK_CUR); // Move the cursor back to overwrite the character
			fputc(ch, fptr); // Write the capitalized character and also convert to writing mode
			fseek(fptr, 0, SEEK_CUR); // Move the cursor back to the current position and also convert back to reading mode.
		}
		capitalizeNext = (ch == ' ' || ch == '\n' || ch == '\t'); // Set flag for next character
	}

	fclose(fptr); // Close the file

	return 0;
}