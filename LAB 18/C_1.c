#include <stdio.h>

int stringLength(char str[])
{
    int i = 0;

    while (str[i] != '\0')
        i++;

    return i;
}

void stringCopy(char dest[], char source[])
{
    int i = 0;

    while (source[i] != '\0')
    {
        dest[i] = source[i];
        i++;
    }

    dest[i] = '\0';
}

void stringConcat(char dest[], char source[])
{
    int i = stringLength(dest);
    int j = 0;

    while (source[j] != '\0')
    {
        dest[i] = source[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}

int stringCompare(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];

        i++;
    }

    return str1[i] - str2[i];
}

void stringReverse(char str[])
{
    int i = 0, j = stringLength(str) - 1;
    char temp;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    int choice, result;
    char str1[100], str2[100], dest[100];

    do
    {
        printf("\n1. Length\n");
        printf("2. Copy\n");
        printf("3. Concatenate\n");
        printf("4. Compare\n");
        printf("5. Reverse\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter string: ");
                scanf("%99s", str1);
                printf("Length = %d\n", stringLength(str1));
                break;

            case 2:
                printf("Enter string: ");
                scanf("%99s", str1);
                stringCopy(dest, str1);
                printf("Copied string = %s\n", dest);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%99s", str1);
                printf("Enter second string: ");
                scanf("%99s", str2);

                if (stringLength(str1) + stringLength(str2) >= 100)
                    printf("Strings are too long.\n");
                else
                {
                    stringCopy(dest, str1);
                    stringConcat(dest, str2);
                    printf("Concatenated string = %s\n", dest);
                }
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%99s", str1);
                printf("Enter second string: ");
                scanf("%99s", str2);

                result = stringCompare(str1, str2);

                if (result == 0)
                    printf("Strings are equal.\n");
                else if (result < 0)
                    printf("First string is smaller.\n");
                else
                    printf("First string is greater.\n");
                break;

            case 5:
                printf("Enter string: ");
                scanf("%99s", str1);
                stringReverse(str1);
                printf("Reversed string = %s\n", str1);
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 6);

    return 0;
}