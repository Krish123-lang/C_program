#include <stdio.h>
int main()
{
    int i = 5;

    printf("%d\n", ++i); // => adds 1 and prints on same time
    printf("%d\n", i);
    printf("%d\n", i++); // => adds and store result within itself
    printf("%d\n", i);   // => Prints the result
    printf("%d\n", --i); // => minus 1 and prints on same time
    printf("%d\n", i);
    printf("%d\n", i--); // => minus 1 and store result within itself
    printf("%d\n", i);   // => Prints the result
    return 0;
}

/*
6
6
6
7
6
6
6
5
*/