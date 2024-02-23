#include <stdio.h>
int main()
{
    int i = 1;
    /*
    // for (int i = 1; i <= 100; i++)
    for (int i = 100; i >= 1; i--) // prints all the even numbers from 100 to 2 (reversed)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i); // prints all the even numbers from 2 to 100
        }
    }
    */

    while (i <= 100) // prints from 2 to 100
    {
        // if (i % 2 == 0) // prints even number
        if (i % 2 != 0) // prints odd number
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}