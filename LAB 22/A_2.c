// 2. Count chars, spaces, tabs and new lines in a file.

#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *fptr; // Declare a file pointer
    int charCount = 0, spaceCount = 0, tabCount = 0, newLineCount = 0;
    char ch;

    // Open the file in read mode
    fptr = fopen("exampleA2.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if file cannot be opened
    }

    // Read the file character by character
    while ((ch = fgetc(fptr)) != EOF) {
        if (ch == '\n') {
            newLineCount++; // Count spaces
        }
        else if (ch == 9) {
            tabCount++; // Count tabs
        }
        else if (ch == ' ') {
            spaceCount++; // Count new lines
        }
        else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            charCount++; // Count characters
        }
    }

    // Close the file
    fclose(fptr);

    // Print the counts
    printf("Character count: %d\n", charCount);
    printf("Space count: %d\n", spaceCount);
    printf("Tab count: %d\n", tabCount);
    printf("New line count: %d\n", newLineCount);

    return 0;
}

