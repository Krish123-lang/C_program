#include <stdio.h>

#define MAX_SIZE 10

// Function to input elements of a matrix
void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to add two matrices
void addMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    if (rows > MAX_SIZE || cols > MAX_SIZE)
    {
        printf("Maximum matrix size exceeded.\n");
        return 1;
    }

    printf("For matrix 1:\n");
    inputMatrix(mat1, rows, cols);

    printf("For matrix 2:\n");
    inputMatrix(mat2, rows, cols);

    addMatrices(mat1, mat2, result, rows, cols);

    displayMatrix(result, rows, cols);

    return 0;
}

/*
Enter the number of rows and columns of the matrices: 2
3
For matrix 1:
Enter the elements of the matrix:
Enter element [1][1]: 3
Enter element [1][2]: 4
Enter element [1][3]: 2
Enter element [2][1]: 
4
Enter element [2][2]: 2
Enter element [2][3]: 4
For matrix 2:
Enter the elements of the matrix:
Enter element [1][1]: 2
Enter element [1][2]: 5
Enter element [1][3]: 2
Enter element [2][1]: 5
Enter element [2][2]: 2
Enter element [2][3]: 5
Resultant Matrix:
5       9       4k
9       4       9
*/