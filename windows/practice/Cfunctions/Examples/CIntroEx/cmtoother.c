#include <stdio.h>
int main()
{
    double centimeters, metres, kilometers;

    printf("Enter length in CM: ");
    scanf("%lf", &centimeters);

    metres = centimeters / 100;
    kilometers = centimeters / 100000;

    printf("%lf cm in metres is: %lf meters \n", centimeters, metres);
    printf("%lf cm in kilometres is: %lf km \n", centimeters, kilometers);
    return 0;
}