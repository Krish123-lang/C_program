#include <stdio.h>

int main() {
    float amount, converted_amount;
    char choice;

    // Get exchange rate for today
    const float exchange_rate = 127.49; // NPR per USD (approximate value)

    printf("Currency Converter\n");
    printf("1. Convert USD to NPR\n");
    printf("2. Convert NPR to USD\n");
    printf("Enter your choice (1 or 2): ");
    scanf(" %c", &choice);

    if (choice == '1') {
        printf("Enter amount in USD: ");
        scanf("%f", &amount);
        converted_amount = amount * exchange_rate;
        printf("%.2f USD is equal to %.2f NPR\n", amount, converted_amount);
    } else if (choice == '2') {
        printf("Enter amount in NPR: ");
        scanf("%f", &amount);
        converted_amount = amount / exchange_rate;
        printf("%.2f NPR is equal to %.2f USD\n", amount, converted_amount);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

/*
Currency Converter
1. Convert USD to NPR
2. Convert NPR to USD
Enter your choice (1 or 2): 2
Enter amount in NPR: 100
100.00 NPR is equal to 0.78 USD
*/