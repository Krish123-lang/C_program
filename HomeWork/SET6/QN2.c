#include <stdio.h>

// Define a structure for complex numbers
typedef struct
{
    float real;
    float imag;
} complex;

// Function to add two complex numbers
complex add(complex num1, complex num2)
{
    complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

// Function to subtract two complex numbers
complex subtract(complex num1, complex num2)
{
    complex result;
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;
    return result;
}

int main()
{
    complex num1, num2, sum, diff;

    // Read the first complex number
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Read the second complex number
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Perform addition
    sum = add(num1, num2);

    // Perform subtraction
    diff = subtract(num1, num2);

    // Display the results
    printf("\nSum: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Difference: %.2f + %.2fi\n", diff.real, diff.imag);

    return 0;
}

/*
Enter real and imaginary parts of first complex number: 9
3
Enter real and imaginary parts of second complex number: 8
5

Sum: 17.00 + 8.00i
Difference: 1.00 + -2.00i
*/