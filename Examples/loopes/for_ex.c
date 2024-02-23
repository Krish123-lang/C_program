#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
/*
Ouptut:
1
3
5
7
9
*/