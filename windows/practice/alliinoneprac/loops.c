#include <stdio.h>
int main()
{
    // For loop
    int i = 1, n;

    /*
    printf("Enter an integer: ");
    scanf("%d", &n);
    */

    /*
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    */

    // While loop
    /*
    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
    */

    // Do_While loop
    /*
    do
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);
    */

    //    break & continue
    for (i = 0; i <= 10; i++)
    {
        printf("%d\n", i);
        if (i == 4)
        {
            printf("Breaking  at %d\n", i);
            // break;
            continue;
        }
    }

    return 0;
}