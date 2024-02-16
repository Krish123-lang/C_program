#include <stdio.h>

int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}
int npr(int n, int r)
{
    return fact(n) / fact(n - r);
}

int main()
{
    int n, r;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    int ans = npr(n, r);
    printf("%d", ans);
    return 0;
}
/*
Output:
Enter n: 5
Enter r: 2
20
*/