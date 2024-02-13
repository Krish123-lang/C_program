#include <stdio.h>

int main()
{
    char c;
    printf("\n\nUpper Case \n");

    for (c = 'A'; c <= 'Z'; c++)
    {
        printf("%c: %d\n", c, c);
    }

    printf("\n\nLower Case  \n");
    for (c = 'a'; c <= 'z'; c++)
    {
        printf("%c: %d\n", c, c);
    }
    return 0;
}
