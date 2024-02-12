#include <stdio.h>
#include <conio.h>
int main()
{
    // This program checks the given two number is smaller or greater
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("A is greater");
    }

    else
    {
        printf("B is greater");
    }
    getch();
}