#include <stdio.h>
int sum(int x, int y, int z)
{
    return x + y + z;
}

int difference(int x, int y, int z)
{
    return x - y - z;
}

int product(int x, int y, int z)
{
    return x * y * z;
}

int division(int x, int y, int z)
{
    return x / y / z;
}

int main()
{
    int a, b, c;
    printf("Enter num1: ");
    scanf("%d", &a);

    printf("Enter num2: ");
    scanf("%d", &b);

    printf("Enter num3: ");
    scanf("%d", &c);

    int add = sum(a, b, c);
    printf("The sum of %d, %d and %d is %d\n", a, b, c, add);

    int subtract = difference(a, b, c);
    printf("The difference of %d, %d and %d is %d\n", a, b, c, subtract);

    int multiplication = product(a, b, c);
    printf("The product of %d, %d and %d is %d\n", a, b, c, multiplication);

    int divide = division(a, b, c);
    printf("The division of %d, %d and %d is %d\n", a, b, c, divide);

    return 0;
}
/*
Output:

Enter num1: 5
Enter num2: 4
Enter num3: 3
The sum of 5, 4 and 3 is 12
The difference of 5, 4 and 3 is -2
The product of 5, 4 and 3 is 60
The division of 5, 4 and 3 is 0
*/