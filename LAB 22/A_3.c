// 3. Demonstrate functions fprintf(), fscanf(), fputc(), fgetc(), fseek() and rewind().

#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fptr; // Declare a file pointer
	char ch;

	// Open a file in read/write mode
	fptr = fopen("exampleA3.txt", "w+"); 

	if(fptr == NULL){
		printf("Error opening file!\n");
		return 1; // Exit if file cannot be opened
	}
	
	// 1. Write to the file using fprintf()
	fprintf(fptr, "Hello World!\nThis is a test file for Lab 22.\n"); 

	rewind(fptr); // After printf the cursor's current position is at the end of the file so move the cursor back to the beginning of the file. 

	// 2. Read a string from the file using fscanf()
	char readString[100];
	fscanf(fptr, "%s", readString); // Reads until first whitespace.
	printf("String read from file: %s\n", readString);
	printf("--------------------------------\n");

	fseek(fptr, 0, SEEK_END); // Move the cursor to the end of the file to add new characters.

	// 3. Write a character to the file using fputc()
	fputc('A', fptr); 
	fputc('B', fptr);
	fputc('\n', fptr);

	// 4. Moving the cursor back to 0 using rewind()
	rewind(fptr);

	printf("Contents of the file after adding new characters:\n");
	while((ch = fgetc(fptr)) != EOF){
		printf("%c", ch); // Print all characters in the file after adding new characters.
	} // Move the cursor to the end of the file after reading all characters.
	printf("--------------------------------\n");

    rewind(fptr); 

	// 5. Reading first character from file using fgetc()
	ch = fgetc(fptr);
	printf("First character read from file: %c\n", ch);
	printf("--------------------------------\n");

	// 6. Move cursor to desired position using fseek()
	fseek(fptr, 5, SEEK_SET); // Move to the 5th byte from the beginning

	printf("Contents of the file from the 5th byte onwards:\n");
	while((ch = fgetc(fptr)) != EOF){
		printf("%c", ch); // Print characters from the 5th byte onwards
	}

	fclose(fptr); // Close the file

	return 0;
}