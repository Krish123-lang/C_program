#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 1, b = 2;

    switch (a)
    {
    case 1:
        printf("The statement is true");
        break;
    case 2:
        printf("The number maybe true");
        break;
    default:
        printf("who are you");
        break;
    }
    getch();
}