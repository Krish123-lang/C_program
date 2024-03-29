#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};          // Sample array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    int sum = 0;

    // Iterate through the array and add each element to the sum
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    // Print the sum
    printf("Sum of all elements in the array: %d\n", sum);

    return 0;
}

// Sum of all elements in the array: 15