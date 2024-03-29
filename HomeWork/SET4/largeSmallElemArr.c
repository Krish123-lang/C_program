#include <stdio.h>

int main()
{
    int arr[100], size, i;
    int largest, smallest;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements in the array:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assuming the first element is the largest and smallest initially
    largest = arr[0];
    smallest = arr[0];

    // Finding the largest and smallest element in the array
    for (i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("Largest element in the array is: %d\n", largest);
    printf("Smallest element in the array is: %d\n", smallest);

    return 0;
}

/*
Enter the size of the array: 7
Enter 7 elements in the array:
5
4
3
5
6
9
3
Largest element in the array is: 9
Smallest element in the array is: 3
*/