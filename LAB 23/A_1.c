// 1. Read a data into Student structure (roll number, name and backlogs) and store the data in to student.txt file. Now open a file in read mode and find out a students’ roll number who has more than 5 backlogs.

#include<stdio.h>
#include<stdlib.h>

struct Student{
	int Roll_Number;
	char Name[100];
	int Backlog;
};

int main(){
	printf("Reading Data....\n");

	int noOfStudents;
	printf("Enter number of students in batch : ");
	scanf("%d", &noOfStudents);

	struct Student students[noOfStudents];

	printf("Enter Roll Number, Name and Backlogs of %d students in order.\n", noOfStudents);

	for(int i = 0; i<noOfStudents ; i++){
		printf("Enter data for STUDENT %d :\n", i+1);

		// Roll Number
		printf("Roll Number : ");
		scanf("%d", &students[i].Roll_Number);

		// Name
		printf("Name : ");
		scanf(" %[^\n]", students[i].Name);

		// Backlogs
		printf("Backlogs : ");
		scanf("%d", &students[i].Backlog);

		printf("\n");
	}

	// Writing data in file
	FILE *fptr = fopen("StudentResults.txt", "w");

	if(fptr == NULL){
		printf("Error opening file.\n");
		return 0;
	}

	// Headings
	fprintf(fptr, "Roll_Number\tName\tBacklogs\n");

	// Entering Data in file
	for(int i = 0; i<noOfStudents ; i++){
		fprintf(fptr, "%d\t%s\t%d\n", students[i].Roll_Number, students[i].Name, students[i].Backlog);
	}
	
	fclose(fptr);

	// Reading Data from file
	fptr = fopen("StudentResults.txt", "r");
	if(fptr == NULL){
		printf("Error opening file.\n");
		return 0;
	}

	// Skipping the heading line for reading
	fscanf(fptr, "%*[^\n]\n");

	struct Student student;

	// Reading the rest of the data in file 
	while((fscanf(fptr, " %d\t%[^\t]\t%d", &student.Roll_Number, student.Name, &student.Backlog)) != EOF){
		if(student.Backlog > 5){
			printf("Roll Number : %d ----- Name : %s has more than 5 backlogs.\n", student.Roll_Number, student.Name);
		}
	}
 
	fclose(fptr);

	// Modifying Roll_Number and Updating data
	int target, foundRoll = 0;
	printf("\nEnter the roll number whose backlog you want to change : ");
	scanf("%d", &target);

	// Read the currently existing records from file
	fptr = fopen("StudentResults.txt", "r");
	if(fptr == NULL){
		printf("Error opening file.\n");
		return 0;
	}
	fscanf(fptr, "%*[^\n]\n"); // skip the header

	int countStudent = 0;

	while ((fscanf(fptr, " %d\t%[^\t]\t%d", &students[countStudent].Roll_Number, students[countStudent].Name, &students[countStudent].Backlog)) != EOF){
		if(students[countStudent].Roll_Number == target){
			students[countStudent].Backlog = 3; // change backlog of targeted roll number to 3
			foundRoll = 1; // the student is found in file
		}
		countStudent++;
	}

	if(!foundRoll){
		printf("Roll Number : %d does not exist in file.\n", target);
	}
	else {
		printf("Backlog of Roll Number : %d changed to 3\n", target);
	}

	fclose(fptr);

	// Storing the updated data into file 
	fptr = fopen("StudentResults.txt", "w");
	if(fptr == NULL){
		printf("Error opening file.\n");
		return 0;
	}

	fprintf(fptr, "Roll_Number\tName\tBacklogs\n");
	for(int i = 0; i<countStudent ; i++){
		fprintf(fptr, "%d\t%s\t%d\n", students[i].Roll_Number, students[i].Name, students[i].Backlog);
	}
	fclose(fptr);

	// Verify data 
	fptr = fopen("StudentResults.txt", "r");
	if(fptr == NULL){
		printf("Error opening file.\n");
		return 0;
	}

	printf("\nVerified data in StudentResults.txt : \n");
	printf("Roll_Number\tName\tBacklogs\n");
	fscanf(fptr, "%*[^\n]\n");

	while((fscanf(fptr, " %d\t%[^\t]\t%d", &student.Roll_Number, student.Name, &student.Backlog)) != EOF){
		printf("%d\t\t%s\t%d\n", student.Roll_Number, student.Name, student.Backlog);
	}

	fclose(fptr);

	return 0;
}
