#include <stdio.h>
int main()
{
    int n;
    printf("Enter the side of square: ");
    scanf("%d", &n);

    // Using nested loop
    for (int i = 1; i <= n; i++) // rows
    {
        for (int j = 1; j <= i; j++) // columns
        {
            // printf("%c ", i+64);
            printf("%c ", j+64);
        }
        printf("\n");
    }

    return 0;
}
/*
Output:
Enter the side of square: 4
A 
A B
A B C
A B C D

Output:
Enter the side of square: 4
A 
B B
C C C
D D D D
*/