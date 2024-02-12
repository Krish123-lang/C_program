#include <stdio.h>
int main()
{
    // int i = 10;
    // float f = 10.10;
    // double d = 10.1001;
    // char c = 'C';

    // printf("%d,%f,%lf,%c", i, f, d, c);

    // const float PI = 3.14;
    // float radius = 4;
    // printf("The area of circle is: %f", PI * (radius * radius));

    // if_else
    /*
    float temp;
    printf("Enter today's temperature: ");
    scanf("%f", &temp);

    if (temp < 20)
    {
        printf("Wear warm clothes");
    }
    else if (temp >= 25 && temp < 40)
    {
        printf("Wear kattu");
    }
    else if (temp >= 40 && temp < 50)
    {
        printf("Stay inside the house and only get out at night");
    }
    else
    {
        printf("Are you kidding me? ");
    }
    */

    //    Switch Case
    int day;
    printf("Enter the day in number (1 to 7): ");
    scanf("%d", &day);


    switch (day)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;

    default:
        printf("Null");
        break;
    }
    return 0;
}