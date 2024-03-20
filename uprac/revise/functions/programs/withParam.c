#include <stdio.h>

void myname(char name[], int age)
{
    printf("Hello, %s, You are %d years old.\n", name, age);
}
int main()
{
    myname("Krishna", 23);
    return 0;
}
// Hello, Krishna, You are 23 years old.