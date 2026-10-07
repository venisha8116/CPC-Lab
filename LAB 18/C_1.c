// 1. Create a menu driven program to implement own string.h library. (without using built-in string functions

#include <stdio.h>
#include "custom_string_library.h"

int main()
{
    char str1[100], str2[100], dest[100];
    int choice;

    while (1)
    {
        printf("\n=== Custom String Operations Menu ===\n");
        printf("1. Find String Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Exiting program.\n");
            return 1;
        }

        switch (choice)
        {
        case 1:
            printf("Enter a string: ");
            scanf(" %[^\n]", str1); // Space before % clears the leftover newline
            printf("Length of the string: %d\n", mystrlen(str1));
            break;

        case 2:
            printf("Enter source string to copy: ");
            scanf(" %[^\n]", str1);
            mystrcpy(dest, str1);
            printf("Original String: %s\n", str1);
            printf("Copied String:   %s\n", dest);
            break;

        case 3:
            printf("Enter destination string (first part): ");
            scanf(" %[^\n]", str1);
            printf("Enter source string to append (second part): ");
            scanf(" %[^\n]", str2);

            mystrcat(str1, str2);
            printf("Concatenated String: %s\n", str1);
            break;

        case 4:
            printf("Enter first string: ");
            scanf(" %[^\n]", str1);
            printf("Enter second string: ");
            scanf(" %[^\n]", str2);

            int result = mystrcmp(str1, str2);
            if (result == 0)
            {
                printf("Both strings are perfectly equal.\n");
            }
            else if (result > 0)
            {
                printf("First string is lexicographically larger.\n");
            }
            else
            {
                printf("Second string is lexicographically larger.\n");
            }
            break;

        case 5:
            printf("Enter a string to reverse: ");
            scanf(" %[^\n]", str1);
            mystrrev(str1);
            printf("Reversed String: %s\n", str1);
            break;

        case 6:
            printf("Exiting program. Goodbye!\n");
            return 0; // Directly exits the main function and stops the loop

        default:
            printf("Invalid choice! Please select an option between 1 and 6.\n");
        }
    }

    return 0;
}