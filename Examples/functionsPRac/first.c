#include <stdio.h>
#define PI 3.14 // MACRO will PI value.
float getArea(float radius)
{
    return PI * radius * radius;
}
int main()
{
    float radius, area;
    printf("Enter the radius of Circle: ");
    scanf("%f", &radius);
    area = getArea(radius);
    printf("Area of Circle with is : %f \n", area);
    return 0;
}