#include <stdio.h>
// #define PI 3.14
int main()

{
    const float PI=3.14;
    float radius;
    printf("Enter the value of radius: ");
    scanf("%f", &radius);

    printf("The area of circle is: %f\n", PI * radius * radius);
    return 0;
}