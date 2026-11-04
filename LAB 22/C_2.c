// 2. Delete all blank lines in a file then insert a blank line after the third line in a file.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr, *tempFile; // Declare a file pointer
	char ch;
	int isBlankLine = 1; // Flag to indicate if the current line is blank
	int lineCount = 0;	 // Counter for the number of lines processed

	fptr = fopen("exampleC2.txt", "r");	  // Open the original file in read mode
	tempFile = fopen("tempC2.txt", "w+"); // Open a temporary file in write mode

	if (fptr == NULL || tempFile == NULL)
	{
		printf("Error opening files!\n");
		return 1; // Exit if files cannot be opened
	}

	while ((ch = fgetc(fptr)) != EOF)
	{
		if (ch == '\n')
		{
			if (!isBlankLine)
			{
				fputc(ch, tempFile); // Write the newline character to the temporary file
				lineCount++;		 // Increment line count for non-blank lines

				if (lineCount == 3)
				{
					fputc('\n', tempFile); // Insert a blank line after the third line
				}
			}

			isBlankLine = 1; // Reset the blank line flag for the next line
		}

		else
		{
			fputc(ch, tempFile); // Write the character to the temporary file
			isBlankLine = 0;	 // Current line is not blank
		}
	}

	fclose(fptr);	  // Close the original file
	fclose(tempFile); // Close the temporary file
}