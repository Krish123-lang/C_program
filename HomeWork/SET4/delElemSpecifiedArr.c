#include <stdio.h>

#define MAX_SIZE 100

// Function to delete an element from specified location
int deleteElement(int arr[], int size, int position)
{
    if (position < 0 || position >= size)
    {
        printf("Invalid position!\n");
        return size;
    }

    // Shift elements to the left starting from the position
    for (int i = position; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    return size - 1; // Decrease size by 1
}

int main()
{
    int arr[MAX_SIZE];
    int size, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE)
    {
        printf("Invalid size! Please enter a size between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete (0 to %d): ", size - 1);
    scanf("%d", &position);

    size = deleteElement(arr, size, position);

    printf("Array after deletion:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
/*
Enter the size of the array: 4
Enter 4 elements:
5
3
2
6
Enter the position of the element to delete (0 to 3): 2
Array after deletion:
5 3 6 
*/