#include <stdio.h>
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};

    int length = sizeof(arr1) / sizeof(arr1[0]);

    // printf("%d\n", length); => 5

    for (int i = 0; i < length; i++)
    {
        printf("%d\n", arr1[i]);
    }
    return 0;
}

/*
1
2
3
4
5
*/