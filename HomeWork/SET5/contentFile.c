#include <stdio.h>
int main()
{
    FILE *f;
    char s;
    f = fopen("test.txt", "r");
    while ((s = fgetc(f)) != EOF)
    {
        printf("%c", s);
    }
    fclose(f);
    return 0;
}

/*
line 1
line 2
line 3
line 4
line 5
line 6
*/