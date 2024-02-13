#include <stdio.h>
int main()
{
    int n;
    printf("Enter the side of square: ");
    scanf("%d", &n);

    // Using nested loop
    for (int i = 1; i <= n; i++) // rows
    {
        for (int j = 1; j <= n; j++) // columns
        {
            // printf("%d ", i);
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
/*
Output:
Enter the side of square: 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/