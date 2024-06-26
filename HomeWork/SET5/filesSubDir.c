#include <stdio.h>
#include <dirent.h>
int main(void)
{
    struct dirent *files;
    DIR *dir = opendir(".");
    if (dir == NULL)
    {
        printf("Directory cannot be opened!");
        return 0;
    }
    while ((files = readdir(dir)) != NULL)
        printf("%s\n", files->d_name);
    closedir(dir);
    return 0;
}

/*
a.out
test
.
test.txt
filesSubDir.c
test2
..
*/