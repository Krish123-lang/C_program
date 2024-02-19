#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    /*
    if (n % 2 == 0)
    {
        printf("%d is even", n);
    }
    else if (n % 2 != 0)
    {
        printf("%d is odd", n);
    }
    else
    {
        printf("Invalid number.");
    }
    */

    (n % 2 == 0) ? printf("%d is Even", n) : printf("%d is Odd", n);
    return 0;
}