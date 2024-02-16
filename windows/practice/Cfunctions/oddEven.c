#include <stdio.h>

void oddEven(int x)
{
    if (x % 2 == 0)
        printf("%d is Even Number", x);
    else
        printf("%d is odd number", x);
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    oddEven(a); //Pass by value
    return 0;
}
/*
Output:
Enter a number: 5
5 is odd number

Enter a number: 2
2 is Even Number
*/