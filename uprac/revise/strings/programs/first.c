#include <stdio.h>
int main()
{
    char name[] = "Krishna";

    /*
    printf("Hello, %s\n", name); // Hello, Krishna

    printf("%c\n", name[0]); // K

    name[0] = 'D';
    printf("Hello, %s\n", name); // Hello, Drishna
    */

    // printf("%lu\n", sizeof(name)); // 8

    int length = sizeof(name) / sizeof(name[0]);
    for (int i = 0; i < length; i++)
    {
        printf("%c\n", name[i]);
    }
    return 0;
}
/*
K
r
i
s
h
n
a
*/