#include <stdio.h>
#include <string.h>

int isVowel(char ch)
{
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        return 1;
    default:
        return 0;
    }
}

int countVowels(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isVowel(str[i]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }

    int vowels = countVowels(str);
    printf("Number of vowels in the string: %d\n", vowels);

    return 0;
}
/*
Enter a string: krishna is a great king
Number of vowels in the string: 7
*/