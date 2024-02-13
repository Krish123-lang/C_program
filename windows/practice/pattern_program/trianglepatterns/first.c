#include <stdio.h>
int main()
{
    int n;
    printf("Enter the side of square: ");
    scanf("%d", &n);

    // Using nested loop printing star
    for (int i = 1; i <= n; i++) // rows
    {
        for (int j = 1; j <= i; j++) // columns
        {
            // printf("* ");
            printf("%d ", j);
            // printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

/*
Output:
Enter the side of square: 5
* 
* *
* * *
* * * *
* * * * *


Output:
Enter the side of square: 5
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5


Output:
Enter the side of square: 4
1 
2 2
3 3 3
4 4 4 4
*/