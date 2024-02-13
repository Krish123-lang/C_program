#include <stdio.h>
int main()
{
    int n, p = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        p *= i;
    }
    printf("Factorian of %d is %d ", n, p);

    return 0;
}