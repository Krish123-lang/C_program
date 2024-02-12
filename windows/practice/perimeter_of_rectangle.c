#include <stdio.h>
#include <conio.h>
int main()
{
    // This program calculates perimeter of rectangle
    float length, breadth;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    printf("Perimeter of rectangle: %f", 2*(length + breadth));
    getch();
}