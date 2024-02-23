#include <stdio.h>

int main() {
    int n, product = 1;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: n must be positive.\n");
        return 1;
    }

    // Calculate the product using a loop
    for (int i = 1; i <= n; i++) {
        product *= i;
    }

    printf("The product of the first %d terms is: %d\n", n, product);

    return 0;
}

/*
Enter a positive integer n: 5
The product of the first 5 terms is: 120
*/