#include <stdio.h>
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("%d is a leap year\n", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is a leap year\n", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is a not a leap year\n", year);
    }
    else
    {
        printf("%d is a not a leap year\n", year);
    }
    return 0;
}

/*
Enter year: 1999
1999 is a not a leap year

Enter year: 2004
2004 is a leap year

Enter year: 2000
2000 is a leap year

Enter year: 2024
2024 is a leap year
*/