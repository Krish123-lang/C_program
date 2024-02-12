#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    printf("Enter the number: ");
    scanf("%d", &n);

    // for (int i = 0; i <= n; i++)
    // {
    //     sum += i;
    // }

    // printf("Sum: %d\n", sum);

    for (int i = n; i >= 1; i--)
    {
        printf("Sum: %d\n", i);
    }
}