// 1. Perform 23-A and 23-B using a function (Do not use a global structure variable)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student {
    int Roll_Number;
    char Name[100];
    int Backlog;
};

void inputStudents(struct Student students[], int n) {
    printf("Enter Roll Number, Name and Backlogs of %d students in order.\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter data for STUDENT %d :\n", i + 1);

        printf("Roll Number : ");
        scanf("%d", &students[i].Roll_Number);

        printf("Name : ");
        scanf(" %[^\n]", students[i].Name);

        printf("Backlogs : ");
        scanf("%d", &students[i].Backlog);

        printf("\n");
    }
}

void writeToFile(char filename[], struct Student students[], int n) {
    FILE *fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }

    fprintf(fptr, "Roll_Number\tName\tBacklogs\n");
    for (int i = 0; i < n; i++) {
        fprintf(fptr, "%d\t%s\t%d\n", students[i].Roll_Number, students[i].Name, students[i].Backlog);
    }

    fclose(fptr);
}

void findHighBacklogs(char filename[]) {
    FILE *fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }

    fscanf(fptr, "%*[^\n]\n"); // Skip header

    struct Student temp; // Local structure variable
    printf("--- Students with more than 5 backlogs ---\n");
    while (fscanf(fptr, " %d\t%[^\t]\t%d", &temp.Roll_Number, temp.Name, &temp.Backlog) != EOF) {
        if (temp.Backlog > 5) {
            printf("Roll Number : %d ----- Name : %s has more than 5 backlogs.\n", temp.Roll_Number, temp.Name);
        }
    }

    fclose(fptr);
}

void modifyBacklog(char filename[], int targetRoll) {
    FILE *fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }

    fscanf(fptr, "%*[^\n]\n"); // Skip header

    struct Student tempList[100]; // Local array to hold records from file
    int count = 0, found = 0;

    while (fscanf(fptr, " %d\t%[^\t]\t%d", &tempList[count].Roll_Number, tempList[count].Name, &tempList[count].Backlog) != EOF) {
        if (tempList[count].Roll_Number == targetRoll) {
            tempList[count].Backlog = 3;
            found = 1;
        }
        count++;
    }
    fclose(fptr);

    if (!found) {
        printf("Roll Number : %d does not exist in file.\n", targetRoll);
        return;
    }

    printf("Backlog of Roll Number : %d changed to 3.\n", targetRoll);
    writeToFile(filename, tempList, count); // Reuse writeToFile() to save updates
}

void verifyFileData(char filename[]) {
    FILE *fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error opening file for verification.\n");
        exit(1);
    }

    fscanf(fptr, "%*[^\n]\n"); // Skip header

    struct Student temp;
    printf("\nVerified data in %s :\n", filename);
    printf("Roll_Number\tName\tBacklogs\n");

    while (fscanf(fptr, " %d\t%[^\t]\t%d", &temp.Roll_Number, temp.Name, &temp.Backlog) != EOF) {
        printf("%d\t\t%s\t%d\n", temp.Roll_Number, temp.Name, temp.Backlog);
    }

    fclose(fptr);
}

int main() {
    char filename[100];
	strcpy(filename, "StudentData.txt");
    int noOfStudents;

    printf("Enter number of students in batch : ");
    scanf("%d", &noOfStudents);


    struct Student students[noOfStudents];

    // 23-A 
    inputStudents(students, noOfStudents);
    writeToFile(filename, students, noOfStudents);
    findHighBacklogs(filename);

    // PART 23-B 
    int targetRoll;
    printf("\nEnter the roll number whose backlog you want to change to 3 : ");
    scanf("%d", &targetRoll);

    modifyBacklog(filename, targetRoll);
    verifyFileData(filename);

    return 0;
}