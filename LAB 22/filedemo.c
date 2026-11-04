#include<stdio.h>
#include<stdlib.h>

int main(){

	// FILE OPENING MODES AND FILE HANDLING FUNCTIONS
	
	// 1. fopen(filename, mode);
	// FILE *fptr = fopen("filedemo.txt", "r");
	// FILE *fptr = fopen("filedemo.txt", "r+");
	// FILE *fptr = fopen("filedemo.txt", "w");
	FILE *fptr = fopen("filedemo.txt", "w+");
	// FILE *fptr = fopen("filedemo.txt", "a");
	// FILE *fptr = fopen("filedemo.txt", "a+");

	// 6 file opening modes in total

	if(fptr == NULL){
		printf("Error opening file.\n");
		return 0;
	}
	else {
		printf("File opened successfully.\n");
	}

	// WRITING DATA TO FILE

	// 2. putc(character, pointer)
	putc('A', fptr);
	putc('\n', fptr);
	printf("Pointer location after putc : %ld\n", ftell(fptr)); // 3 : 1 for 'A' and 2 for '\n' interpreted as '\r\n'

	// 3. fprintf(pointer, format specifier list, variable list)
	fprintf(fptr, "Hello, World!\n");

	// 4. ftell(pointer)
	printf("Pointer location : %ld\n", ftell(fptr)); //18 : 3+13 for the "Hello, World!", enter key or \n translates to \r\n (2 bytes) in Windows, so total 15 bytes.

	fprintf(fptr, "%s %d %f\n", "Riya", 79, 85.77);
	printf("Pointer location : %ld\n", ftell(fptr)); // 37 : 18 + 4(Riya) + 1(space) + 2(79) + 1(space) + 9(85.770000) + 2(\n as \r\n)

	// 5. putw(integer, pointer)
	putw(100, fptr); // writes raw binary integer (4 bytes)
	printf("Pointer location after putw : %ld\n", ftell(fptr)); // 41 : 37 + 4 (4 bytes for integer)
	
	// REWIND
	// rewind(pointer)
	rewind(fptr); 
	printf("Pointer location after rewind : %ld\n", ftell(fptr)); // 0 : Pointer reset to beginning
	

	// READING DATA FROM FILE

	// 1. getc(pointer)
	char ch = getc(fptr);
	printf("Character read using getc : %c\n", ch); // A
	printf("Pointer location after getc : %ld\n", ftell(fptr)); // 1

	// 2. fscanf(pointer, format specifier, variable list)
	char str[50];
	fscanf(fptr, "%s", str); // Skips leading whitespace (\r\n at 1,2), reads "Hello," up to the space
	printf("String read using fscanf : %s\n", str); // Hello,
	printf("Pointer location after fscanf : %ld\n", ftell(fptr)); // 9 : Stops on the space character at position 9

	// FSEEK
	// fseek(pointer, offset, origin) : SEEK_SET, SEEK_CUR, SEEK_END

	// 1. SEEK_SET : move relative to beginning
	fseek(fptr, 0, SEEK_SET);
	printf("Pointer location after fseek SEEK_SET : %ld\n", ftell(fptr)); // 0

	fseek(fptr, 5, SEEK_SET);
	printf("Pointer location after fseek SEEK_SET : %ld\n", ftell(fptr)); // 5

	// 2. SEEK_CUR : move relative to current position
	fseek(fptr, 5, SEEK_CUR);
	printf("Pointer location after fseek SEEK_CUR : %ld\n", ftell(fptr)); // 10(5+5)

	// .3. SEEK_END : move relative to end
	fseek(fptr, 0, SEEK_END);
	printf("Pointer location after fseek SEEK_END : %ld\n", ftell(fptr)); // 41(Total file size)

	fseek(fptr, -5, SEEK_END);
	printf("Pointer location after fseek SEEK_END : %ld\n", ftell(fptr)); // 36 (41-5)

	fseek(fptr, 0, SEEK_END); //46
	fseek(fptr, 5, SEEK_END);
	printf("Pointer location after fseek SEEK_END : %ld\n", ftell(fptr)); // 46 (41+5)

	// GETW
	// To read the integer written by putw, move exactly 4 bytes back from the end of the file
	fseek(fptr, -4, SEEK_END); 
	printf("Pointer repositioned for getw. Location : %ld\n", ftell(fptr)); // 37

	int num = getw(fptr);
	printf("Integer read using getw : %d\n", num); // 100
	printf("Pointer location after getw : %ld\n", ftell(fptr)); // 41 back to last position after reading 100

	// FSCANF LOOP
	printf("Reading all strings from file using fscanf in loop : \n");
	fseek(fptr, 0, SEEK_SET); // Restart to read file from start

	while((fscanf(fptr, "%s", str)) != EOF){
		printf("String read using fscanf in loop : %s\n", str);
	}

	// FCLOSE
	fclose(fptr);
	printf("File closed successfully.\n");

	return 0;
}