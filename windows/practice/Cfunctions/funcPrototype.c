#include <stdio.h>
// Using Function prototype to eliminate errors.

void three()
{
    printf("three\n"); // Third this
    void two();
    two();
}
void two()
{
    printf("Two\n"); // Fourth this
    void one();
    one();
}

void one()
{
    printf("One\n"); // Fifth this
}

void four()
{
    printf("four\n"); // Second this
    void three();
    three();
}
int main()
{
    printf("Main\n"); // First this
    four();
    return 0;
}

/*
Output:

Main
four
three
Two
One

*/