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

    r = r / 100;

    // ci = p * (1 + (r ** t)) - p;

    ci=p**r;

    printf("Compound Interest: %f\n", ci);

    return 0;
}