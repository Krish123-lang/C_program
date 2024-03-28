#include <stdio.h>

int main()
{
    int start, end;

    // Prompting the user to enter the starting and ending numbers
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Printing numbers in reverse order with a difference of 2
    printf("Numbers in reverse order with a difference of 2:\n");
    for (int i = end; i >= start; i -= 2)
    {
        printf("%d \n", i);
    }

    return 0;
}

/*
Enter the starting number: 2
Enter the ending number: 9
Numbers in reverse order with a difference of 2:
9 
7 
5 
3 
*/