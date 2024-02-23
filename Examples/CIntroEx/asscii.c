#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    // printf("%d", c); // Displays the number. Ex. a=97
    printf("ASCII of %c = %d", c, c);
    return 0;
}