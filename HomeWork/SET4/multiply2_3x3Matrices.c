#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int mat1[][3], int mat2[][3], int result[][3])
{
    int i, j, k;

    // Initialize result matrix to 0
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultMatrix[3][3];

    // Multiply matrices
    multiplyMatrices(matrix1, matrix2, resultMatrix);

    // Display the result
    printf("Matrix 1:\n");
    displayMatrix(matrix1);
    printf("\nMatrix 2:\n");
    displayMatrix(matrix2);
    printf("\nResult Matrix:\n");
    displayMatrix(resultMatrix);

    return 0;
}

/*
Matrix 1:
1       2       3
4       5       6
7       8       9

Matrix 2:
9       8       7
6       5       4
3       2       1

Result Matrix:
30      24      18
84      69      54
138     114     90
*/