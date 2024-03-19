#include <stdio.h>
int main()
{
    int age[] = {20, 10, 34, 23, 65, 22, 45, 56, 96};

    int length = sizeof(age) / sizeof(age[0]);

    int lowestAge = age[0];

    for (int i = 0; i < length; i++)
    {
        if (lowestAge > age[i])
        {
            lowestAge = age[i];
        }
    }

    printf("The lowest age in array is: %d\n", lowestAge);
    return 0;
}
// The lowest age in array is: 10