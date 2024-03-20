#include <stdio.h>
#include <string.h>

int main()
{
    // strlen() => To get string length
    /*
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%ld\n", strlen(alphabet)); //26
    */

    // --------------------------------------------------------------------------

    // strcat() => To concatenate Two string
    /*
    char str1[] = "Hello";
    char str2[] = "World";

    printf("%s\n", strcat(str1, str2)); // HelloWorld
    */

    // --------------------------------------------------------------------------

        // strcpy() => To copy one string to another
    /*
    char str1[10] = "Hello";
    char str2[10];
    strcpy(str2, str1); // Copy str1 to str2
    printf("%s\n", str2);
    */

    // --------------------------------------------------------------------------

    // strcmp() => To compare two strings. It returns 0 if the two strings are equal, otherwise a value that is not 0:

    char str1[10] = "Hello";
    char str2[10] = "Hello";
    char str3[10] = "hi";

    printf("%d\n", strcmp(str1, str2)); // 0
    printf("%d\n", strcmp(str1, str3)); // -32
    return 0;
}