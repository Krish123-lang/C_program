#include <stdio.h>
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i == 4)
        {
            continue; // exclude 4 and print other numbers
            // break; // break the loop when the number reaches to 4
        }
        printf("%d\n", i);
    }
}