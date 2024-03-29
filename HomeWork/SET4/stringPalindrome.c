#include <stdio.h>
#include <stdbool.h>

// Function to check if a string is a palindrome
bool isPalindrome(char str[])
{
    int length = 0;
    // Calculate the length of the string
    while (str[length] != '\0')
    {
        length++;
    }

    // Start comparing characters from both ends of the string
    int i = 0, j = length - 1;
    while (i < j)
    {
        // If characters at current positions are not equal, it's not a palindrome
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    // If we reach here, the string is a palindrome
    return true;
}

int main()
{
    char str[100];

    // Read the string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Check if the string is a palindrome
    if (isPalindrome(str))
    {
        printf("%s is a palindrome.\n", str);
    }
    else
    {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}

/*
Enter a string: aba
aba is a palindrome.

Enter a string: jfkjfgerer
jfkjfgerer is not a palindrome.
*/