#include <stdio.h>
int main()
{
    int i = 1, end, sum = 0;
    printf("End: ");
    scanf("%d", &end);

    // ******************************************************************************************

    // sum of all natural numbers
    /*
    for (i = 1; i <= end; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    */

    // ******************************************************************************************

    // sum of all even numbers
    /*
    for (i = 1; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("%d", sum);
    // Ouptut: End: 6        12
    */

    // ******************************************************************************************

    // sum of all odd numbers
    for (i = 1; i <= end; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("%d", sum);

    /*
    Ouptut:
    End: 7
    16
    */

    return 0;
}