#include <stdio.h>
int main()
{
    int n, i, fact = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a positive number");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("Factorial of %d:  %d\n",n, fact);
    }

    return 0;
}

/*
Enter n: 6
Factorial of 6:  720

Enter n: 0
Factorial of 0:  1

Enter n: 1
Factorial of 1:  1

Enter n: 2
Factorial of 2:  2

Enter n: 3
Factorial of 3:  6

Enter n: 10
Factorial of 10:  3628800
*/