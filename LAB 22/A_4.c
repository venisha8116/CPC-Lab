// 4. Append one file at the end of other.

#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *sourceFile, *destFile; // Declare file pointers
	char ch;

	sourceFile = fopen("source_A4.txt", "r"); // Open source file in read mode
	destFile = fopen("destination_A4.txt", "a+"); // Open destination file in append/read mode

	if(sourceFile == NULL || destFile == NULL){
		printf("Error opening files!\n");
		return 1; // Exit if files cannot be opened
	}

	while((ch = fgetc(sourceFile)) != EOF){
		fputc(ch, destFile);
	}

	fclose(sourceFile); // Close the source file
	
	rewind(destFile); // Move the cursor to the beginning of the destination file to read its contents.

	while((ch = fgetc(destFile)) != EOF){
		printf("%c", ch); // Print all characters in the destination file after appending.
	}

	fclose(destFile); // Close the destination file

	return 0;
}