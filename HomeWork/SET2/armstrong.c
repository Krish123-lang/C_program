#include <stdio.h>
int main()
{
    int num, originalNum, remainder, result = 0;

    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;

        result += remainder * remainder * remainder;

        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
/*
Enter a three-digit integer: 432
432 is not an Armstrong number.

Enter a three-digit integer: 371
371 is an Armstrong number.
*/