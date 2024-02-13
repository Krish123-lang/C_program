#include <stdio.h>
int main()
{
    /*
    printf("*****\n");
    printf("*****\n");
    printf("*****\n");
    */

    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);

    printf("Enter the number of columns: ");
    scanf("%d", &n);

    // Using nested loop
    for (int i = 1; i <= m; i++) // rows
    {
        for (int j = 1; j <= n; j++) // columns
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}