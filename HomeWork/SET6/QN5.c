#include <stdio.h>

struct employee
{
    char name[30];
    int empId;
    float salary;
    char location[50];
};

int main()
{
    /*declare structure variable*/
    struct employee emp;

    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name :");
    fgets(emp.name, sizeof(emp.name), stdin);
    printf("ID :");
    scanf("%d", &emp.empId);
    printf("Salary :");
    scanf("%f", &emp.salary);

    /*print employee details*/
    printf("\nEntered detail is:\n");
    printf("Name: %s", emp.name);
    printf("Id: %d\n", emp.empId);
    printf("Salary: %f\n", emp.salary);
    return 0;
}

/*
Enter details :
Name :krishna
ID :4545
Salary :343434

Entered detail is:
Name: krishna
Id: 4545
Salary: 343434.000000
*/