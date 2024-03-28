#include <stdio.h>
#include <math.h>

int main()
{
    float si, ci, p, t, r;

    printf("Enter Principle: ");
    scanf("%f", &p);

    printf("Enter Time: ");
    scanf("%f", &t);

    printf("Enter Rate: ");
    scanf("%f", &r);

    si = (p * t * r) / 100;

    printf("Simple Interest: %f\n", si);

    /*Compound Interest*/

    ci = p * (pow((1 + r / 100), t));

    printf("Compound Interest: %f\n", ci);

    return 0;
}

/*
Enter Principle: 6700
Enter Time: 7
Enter Rate: 4
Simple Interest: 1876.000000
Compound Interest: 8816.740234
*/