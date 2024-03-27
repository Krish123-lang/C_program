#include <stdio.h>
int main()
{
    int a = 5, b = 2, temp;

    printf("a= %d, b= %d\n", a, b);

    /*
    temp = a;
    a = b;
    b = temp;

    */

    a = a + b;
    b = a - b;
    a = a - b;
    printf("a= %d, b= %d\n", a, b);

    return 0;
}

/*
*** Using 3rd variable ***
a= 5, b= 2
a= 2, b= 5

------------------------
*** without using 3rd variable ***

a= 5, b= 2
a= 2, b= 5
*/