#include <stdio.h>
//#include <conio.h>
int main()
{
    // This program calculates sum of two numbers
    int n1, n2, sum;
    printf("enter first number: ");
    scanf("%d", &n1);

    printf("enter second number: ");
    scanf("%d", &n2);

    sum = n1 + n2;
    printf("Sum: %d", sum);
    return 0;
}
