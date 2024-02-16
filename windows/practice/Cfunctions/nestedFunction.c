#include <stdio.h>
// Must be in order. 
// If not then, the Function prototype should be used.

void one()
{
    printf("One\n"); // Fifth this
}
void two()
{
    printf("Two\n"); // Fourth this
    one();
}
void three()
{
    printf("three\n"); // Third this
    two();
}
void four()
{
    printf("four\n"); // Second this
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