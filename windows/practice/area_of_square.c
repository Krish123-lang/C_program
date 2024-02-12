#include <stdio.h>
#include <conio.h>

int main()
{
    // This program calculates area of square
    float l, area;
    printf("Enter L: ");
    scanf("%f", &l);

    area = l * l;
    printf("Area of square: %f", area);
    getch();
}