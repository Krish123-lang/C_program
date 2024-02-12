#include <stdio.h>
#include <conio.h>
int main()
{
    // This program calculates area of circle
    const float PI = 3.14;
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area of circle: %f", PI * radius * radius);
    getch();
}