#include <stdio.h>
int min(int x, int y)
{
    if (x < y)
        return x;
    else
        return y;
}

int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    int m = min(a, b);

    printf("The minimum %d and %d is: %d", a, b, m);
    return 0;
}