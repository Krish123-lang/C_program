#include <stdio.h>
int main()
{
    int n1, n2;

    printf("enter  n1: ");
    scanf("%d", &n1);

    printf("enter  n2: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("N1 : %d is bigger\n", n1);
    }
    else
    {
        printf("N2 : %d is bigger\n", n2);
    }
    return 0;
}

/*
enter  n1: 7
enter  n2: 3
N1 : 7 is bigger
*/