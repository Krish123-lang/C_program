#include <stdio.h>
int main()
{
    int a, b, c, max, min;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b && a > c) ? a : ((b > a && b > c) ? b : c);
    min = (a < b && a < c) ? a : ((b < a && b < c) ? b : c);

    printf("Max number: %d\n", max);
    printf("Min number: %d\n", min);

    int maxEven=(max%2==0)?printf("Max number: %d is Even\n", max):printf("Max number: %d is Odd\n", max);
    int minEven=(min%2==0)?printf("Min number: %d is Even\n", min):printf("Min number: %d is Odd\n", min);

    return 0;
}

/*
Enter three numbers: 9
5
2
Max number: 9
Min number: 2
Max number: 9 is Odd
Min number: 2 is Even

-----------------------

Enter three numbers: 8
5
2
Max number: 8
Min number: 2
Max number: 8 is Even
Min number: 2 is Even
*/