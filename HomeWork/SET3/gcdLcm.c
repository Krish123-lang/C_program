#include <stdio.h>

// Function to find GCD
int findGCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find LCM
int findLCM(int a, int b)
{
    return (a * b) / findGCD(a, b);
}

int main()
{
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and print GCD and LCM
    printf("GCD of %d and %d is %d\n", num1, num2, findGCD(num1, num2));
    printf("LCM of %d and %d is %d\n", num1, num2, findLCM(num1, num2));

    return 0;
}
/*
Enter two numbers: 6
3
GCD of 6 and 3 is 3
LCM of 6 and 3 is 6
*/