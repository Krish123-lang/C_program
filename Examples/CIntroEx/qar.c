#include <stdio.h>
int main()
{
    int n1, n2, q, r;

    printf("Enter n1: ");
    scanf("%d", &n1);

    printf("Enter n2: ");
    scanf("%d", &n2);

    q = n1 / n2;
    r = n1 % n2;

    printf("Quotient: %d\n", q);
    printf("Remainder: %d\n", r);

    return 0;
}

/*
Ouptut:

Enter n1: 45
Enter n2: 2
Quotient: 22
Remainder: 1
*/