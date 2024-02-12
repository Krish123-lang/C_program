#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i = 1;
    clrscr();

    printf("Enter an integer: ");
    scanf("%d", &n);
    /*For Loop */
    /*
    for(i=1;i<=10;i++)
    {
    printf("%d x %d = %d\n", n,i,n*i);
    }
    */

    /*While Loop */
    /*
    while(i<=10)
    {
    printf("%d x %d = %d\n", n,i,n*i);
    i++;
    }
    */

    /* Do While Loop */
    do
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);

    getch();
}