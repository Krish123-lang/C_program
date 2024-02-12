#include <stdio.h>
#include <conio.h>
int main()
{
    // This program checks the given number is divisible by 2
    int num;
    printf("enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number is divisible by 2");
    }
    else
    {
        printf("The number is not divisible by 2");
    }
}