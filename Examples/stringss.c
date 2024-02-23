#include <stdio.h>
int main()
{
    // char name[] = "Hello";

    char name[30];

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s", name);
}