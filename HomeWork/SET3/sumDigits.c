#include <stdio.h>

int main()
{
    int number, remainder, sum = 0;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Iterate through each digit of the number
    for (; number != 0; number /= 10)
    {
        remainder = number % 10; // Extract the last digit
        sum += remainder;        // Add the digit to the sum
    }

    // Print the sum of digits
    printf("Sum of digits: %d\n", sum);

    return 0;
}
/*
Enter a number: 56
Sum of digits: 11
*/