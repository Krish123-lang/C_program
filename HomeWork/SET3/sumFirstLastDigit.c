#include <stdio.h>

int main()
{
    int number, first_digit, last_digit, sum;

    // Input a four-digit number
    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    // Extract the first and last digits
    first_digit = number / 1000; // Extract thousands place digit
    last_digit = number % 10;    // Extract ones place digit

    // Calculate the sum
    sum = first_digit + last_digit;

    // Display the result
    printf("Sum of the first and last digits: %d\n", sum);

    return 0;
}

/*
Enter a four-digit number: 7394
Sum of the first and last digits: 11
*/