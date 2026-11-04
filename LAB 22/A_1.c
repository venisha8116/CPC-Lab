// 1. Create, open and close a file. 

#include<stdio.h>

int main() {
    FILE *fptr; // Declare a file pointer

    // Create and open a file in write mode
    fptr = fopen("exampleA1.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if file cannot be opened
    }

    // Write some text to the file
    fprintf(fptr, "Hello, World!\n");
    fprintf(fptr, "This is a test file of Lab 22 .\n");

    // Close the file
    fclose(fptr);
    printf("File created and closed successfully.\n");

    return 0;
}

