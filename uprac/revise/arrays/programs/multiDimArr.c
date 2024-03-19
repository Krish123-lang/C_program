#include <stdio.h>
int main()
{
    int arr1[3][4] = {{1, 2, 3, 5}, {4, 5, 6, 20}, {7, 8, 9, 34}};

    // printf("%d\n", arr1[1][3]); => 20

    // Looping

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\n", arr1[i][j]);
        }
    }
    return 0;
}
/*
1
2
3
5
4
5
6
20
7
8
9
34
*/