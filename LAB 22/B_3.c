// 3. Merge alternate lines from two file. 

#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *file1, *file2, *mergedFile; // Declare file pointers
	char ch;

	file1 = fopen("file1_B3.txt", "r"); // Open first file in read mode
	file2 = fopen("file2_B3.txt", "r"); // Open second file in read mode
	mergedFile = fopen("merged_B3.txt", "w+"); // Open merged file in write/read mode

	if(file1 == NULL || file2 == NULL || mergedFile == NULL){
		printf("Error opening files!\n");
		return 1; // Exit if files cannot be opened
	}

	int file1NotComplete = 1, file2NotComplete = 1; // Flags to indicate if files are completely read

	while(file1NotComplete || file2NotComplete){
		if(file1NotComplete){
			while((ch = fgetc(file1)) != EOF){
				fputc(ch, mergedFile);

				if(ch == '\n') break; // Stop reading from file1 after a line is read
			}

			if(ch == EOF) file1NotComplete = 0; // Mark file1 as completely read
		}

		if(file2NotComplete){
			while((ch = fgetc(file2)) != EOF){
				fputc(ch, mergedFile);

				if(ch == '\n') break; // Stop reading from file2 after a line is read
			}

			if(ch == EOF) file2NotComplete = 0; // Mark file2 as completely read
		}
	}

	fclose(file1); // Close the first file
	fclose(file2); // Close the second file
	
	rewind(mergedFile); // Move the cursor to the beginning of the merged file to read its contents.

	printf("Contents of the merged file:\n");
	while((ch = fgetc(mergedFile)) != EOF){
		printf("%c", ch); // Print all characters in the merged file.
	}

	fclose(mergedFile); // Close the merged file

	return 0;
}