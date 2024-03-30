#include <stdio.h>

// Structure to represent student details
struct Student
{
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float avgMarks;
};

// Function to read student details
void readStudentDetails(struct Student *student)
{
    printf("Enter Roll No: ");
    scanf("%d", &student->rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", student->name);

    printf("Enter Address: ");
    scanf(" %[^\n]", student->address);

    printf("Enter Age: ");
    scanf("%d", &student->age);

    printf("Enter Average Marks: ");
    scanf("%f", &student->avgMarks);
}

// Function to display student details
void displayStudentDetails(struct Student student)
{
    printf("\nRoll No: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Address: %s\n", student.address);
    printf("Age: %d\n", student.age);
    printf("Average Marks: %.2f\n", student.avgMarks);
}

int main()
{
    struct Student students[12];

    // Read details of 12 students
    printf("Enter details of 12 students:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        readStudentDetails(&students[i]);
    }

    // Display details of all students
    printf("\nDetails of 12 students:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        displayStudentDetails(students[i]);
    }

    return 0;
}

/*
Enter details of 12 students:

Student 1:
Enter Roll No: 23
Enter Name: krishna
Enter Address: brt
Enter Age: 23
Enter Average Marks: 90

Student 2:
Enter Roll No: 22
Enter Name: john
Enter Address: milky galaxy
Enter Age: 45
Enter Average Marks: 89

Details of 12 students:

Student 1:

Roll No: 23
Name: krishna
Address: brt
Age: 23
Average Marks: 90.00

Student 2:

Roll No: 22
Name: john
Address: milky galaxy
Age: 45
Average Marks: 89.00
*/