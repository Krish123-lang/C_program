#include <stdio.h>

int main()
{
    int num1, num2, num3, max;

    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    max = (num1 > num2 && num1 > num3) ? num1 : ((num2 > num1 && num2 > num3) ? num2 : num3);

    /*
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d\n", num1);
        }
        else
        {
            printf("%d\n", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("%d\n", num2);
        }
        else
        {
            printf("%d\n", num3);
        }
    }
    */
    printf("The largest number is: %d\n", max);

    return 0;
}

/*
Enter three integer numbers: 6
4
3
The largest number is: 6
*/