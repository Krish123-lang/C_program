#include <stdio.h>
void greet()
{
    printf("Hello world\n");
    printf("How are you?\n");

    return;
}

int main()
{
    printf("This will be executed first\n");
    greet();
    printf("This will be executed according to the code order.\n");
    return 0;
}

/*
Output:

This will be executed first
Hello world
How are you?
This will be executed according to the code order.
*/