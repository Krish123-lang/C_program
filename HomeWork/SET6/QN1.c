#include <stdio.h>

// Structure definition
struct company
{
    char name[100];
    char address[100];
    char phone[15];
    int noOfEmployee;
};

int main()
{
    // Declare a variable of type company
    struct company comp;

    // Read company details from the user
    printf("Enter company name: ");
    scanf("%99[^\n]", comp.name);
    getchar(); // Consume the newline character

    printf("Enter company address: ");
    scanf("%99[^\n]", comp.address);
    getchar(); // Consume the newline character

    printf("Enter company phone: ");
    scanf("%14[^\n]", comp.phone);
    getchar(); // Consume the newline character

    printf("Enter number of employees: ");
    scanf("%d", &comp.noOfEmployee);

    // Display company details
    printf("\nCompany details:\n");
    printf("Name: %s\n", comp.name);
    printf("Address: %s\n", comp.address);
    printf("Phone: %s\n", comp.phone);
    printf("Number of employees: %d\n", comp.noOfEmployee);

    return 0;
}

/*
Enter company name: Google
Enter company address: California
Enter company phone: 0123456789
Enter number of employees: 20000

Company details:
Name: Google
Address: California
Phone: 0123456789
Number of employees: 20000
*/