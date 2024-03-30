#include <stdio.h>
int main()
{
    FILE *file;
    char filename[1024];

    printf("Enter file: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    int current_line = 1;
    char c;
    do
    {
        c = fgetc(file);
        if (c == '\n')
            current_line++;
    } while (c != EOF);

    fclose(file);

    printf("Lines: %d\n", current_line);
    return 0;
}

/*
Enter file: test.txt
Lines: 5
*/