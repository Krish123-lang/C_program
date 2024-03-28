#include <stdio.h>

// Function to generate Fibonacci series
void fibonacci(int n)
{
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series up to %d terms:\n", n);
    printf("%d %d ", first, second);

    for (i = 2; i < n; i++)
    {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Number of terms should be greater than 0.\n");
    }
    else
    {
        fibonacci(n);
    }

    return 0;
}

/*
Enter the number of terms: 6
Fibonacci Series up to 6 terms:
0 1 1 2 3 5
*/