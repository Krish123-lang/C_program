#include <stdio.h>
#include <conio.h>
int main()
{
    // This program calculates the average of three numbers
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    printf("The average of a,b,c is: %d", (a + b + c) / 3);
    getch();
}