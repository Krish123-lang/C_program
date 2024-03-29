#include <stdio.h>

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1; // Element not found
}

int main()
{
    int arr[] = {2, 5, 7, 9, 12, 15, 18, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, index;

    printf("Enter the element to search: ");
    scanf("%d", &x);

    index = search(arr, n, x);

    if (index != -1)
        printf("Element %d found at index %d\n", x, index);
    else
        printf("Element %d not found in the array\n", x);

    return 0;
}

/*
Enter the element to search: 6
Element 6 not found in the array

Enter the element to search: 4
Element 4 not found in the array

Enter the element to search: 5
Element 5 found at index 1

Enter the element to search: 18
Element 18 found at index 6
*/