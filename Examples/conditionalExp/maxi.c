#include <stdio.h>
int main()
{
    /*
    // For two numbers
    int n1, n2;

    printf("Enter n1: ");
    scanf("%d", &n1);

    printf("Enter n2: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("N1 is maximum");
    }
    else
    {
        printf("N2 is maximum");
    }
    */

   // For three numbers 
   
    int n1, n2, n3;
    printf("Enter n1: ");
    scanf("%d", &n1);

    printf("Enter n2: ");
    scanf("%d", &n2);

    printf("Enter n3: ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("N1 is maximum");
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("N2 is maximum");
    }
    else
    {
        printf("N3 is maximum");
    }

    return 0;
}