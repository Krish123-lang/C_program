#include <stdio.h>
int main()
{
    /*
    char stdName[20];
    int programming, physics, english, maths, biology;

    printf("Enter student's name: ");
    fgets(stdName, sizeof(stdName), stdin);

    printf("Enter marks in: programming, physics, english, maths, biology: \n");
    scanf("%d %d %d %d %d", &programming, &physics, &english, &maths, &biology);

    printf("*** *** *** *** *** *** *** *** *** \n\n");
    printf("Hello, %s\n", stdName);
    */

    char name[50];
    int marks[5];
    int i, totalMarks = 0;
    float percentage;

    // Input student's name
    printf("Enter student's name: ");
    scanf("%[^\n]%*c", name);

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }

    // Calculate percentage
    percentage = (float)totalMarks / 5;

    // Display student information
    printf("\nStudent's Name: %s\n", name);
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    
    // Determine class of result
    if (percentage >= 90)
        printf("Class: Distinction\n");
    else if (percentage >= 75)
        printf("Class: First Class\n");
    else if (percentage >= 60)
        printf("Class: Second Class\n");
    else if (percentage >= 50)
        printf("Class: Pass Class\n");
    else
        printf("Class: Fail\n");
    return 0;
}
