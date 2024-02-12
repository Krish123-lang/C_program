#include <stdio.h>
int main()
{
    /*
    1. int
    2. float/double
    3. char
    */

    /*
     int n1 = 10;
     float f1 = 10.101;
     double d1 = 10.1010101;
     char c1 = 'C';

     printf("Integer value: %d \n", n1);
     printf("Float value: %f \n", f1);
     printf("Double value: %lf \n", d1);
     printf("Char value: %c \n", c1);
     */

    int i;
    float f;
    double d;
    char c;

    printf("%lu\n", sizeof(i));
    printf("%lu\n", sizeof(f));
    printf("%lu\n", sizeof(d));
    printf("%lu\n", sizeof(c));

    return 0;
}