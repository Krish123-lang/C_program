#include <stdio.h>
int main()
{
    printf("Size Of int: %lu\n", sizeof(int));
    printf("Size Of float: %lu\n", sizeof(float));
    printf("Size Of double: %lu\n", sizeof(double));
    printf("Size Of char: %lu\n", sizeof(char));
    return 0;
}

/*
Size Of int: 4
Size Of float: 4
Size Of double: 8
Size Of char: 1
*/