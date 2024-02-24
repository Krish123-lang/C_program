#include <stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char c;

    printf("Size of int: %lu\n", sizeof(i));
    printf("Size of float: %lu\n", sizeof(f));
    printf("Size of double: %lu\n", sizeof(d));
    printf("Size of char: %lu\n", sizeof(c));
    return 0;
}

/*
Size of int: 4
Size of float: 4
Size of double: 8
Size of char: 1

*/
