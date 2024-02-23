#include <stdio.h>
int main()
{
    int a = 12, b = 25, c = -25;
    printf("AND ops: %d\n", a & b);
    printf("OR ops: %d\n", a | b);
    printf("XOR ops: %d\n", a ^ b);
    printf("Complement ops: %d\n", ~a);
    printf("Complement ops: %d\n", ~c);
    return 0;
}