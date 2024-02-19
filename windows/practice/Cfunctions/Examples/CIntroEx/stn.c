#include <stdio.h>
int main()
{
    int n1 = 2, n2 = 4, temp;

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("n1: %d\n n2: %d\n ", n1, n2);

    return 0;
}