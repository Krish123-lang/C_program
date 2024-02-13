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
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/*
Output:
Enter the side of square: 6
* * * * * * 
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
*/