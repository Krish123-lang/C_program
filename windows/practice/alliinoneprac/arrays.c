#include <stdio.h>
int main()
{
    // int numbers[] = {11, 22, 33, 44, 55};
    // printf("%d", numbers[3]);

    // changing array elements
    // numbers[1] = 4545;
    // printf("%d", numbers[1]);

    // Looping through an array

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", numbers[i]);
    // }

    // declaring an array of size 4
    /*
    int arr1[4];

    arr1[0] = 44;
    arr1[1] = 33;
    arr1[2] = 22;
    arr1[3] = 11;

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", arr1[i]);
    }
    */

    //    Getting array size or length

    // int num1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // printf("%lu\n", sizeof(num1)); // int = 4 bytes : 4 * 10 = 40. Where 10 is the length of the array.
    //  and we use %lu specifier to get the size of variables or array in this topic

    /*
    int length = sizeof(num1) / sizeof(num1[0]);
    for (int i = 0; i < length; i++)
    {
        printf("%d", length);
    }
    */

    int myNumbers[] = {25, 50, 75, 100};
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

    for (int i = 0; i < length; i++)
    {
        printf("%d\n", myNumbers[i]);
    }
    return 0;
}