#include <stdio.h>
int main()
{
    int start;

    printf("Enter the number: ");
    scanf("%d", &start);

    for (int i = start; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}
/*
Ouptut:
Enter the number: 10
10
9
8
7
6
5
4
3
2
1
*/