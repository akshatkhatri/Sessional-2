#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void transposeMatrix(int mainMatrix[3][3], int row, int col);
void additionOfTwoMatrix(int mainMatrix1[3][3], int mainMatrix2[3][3], int row, int col);
void productOfTwoMatrix(int mainMatrix1[3][3], int mainMatrix2[3][3], int row, int col);
void printMatrix(int mainMatrix[3][3], int row, int col);

int main()
{
    int row = 3;
    int col = 3;
    int mainMatrix[3][3];
    int mainMatrix2[3][3];

    // Input values for matrix1 and matrix2
    printf("Enter values for matrix1:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter value for matrix1[%d][%d]: ", i, j);
            scanf("%d", &mainMatrix[i][j]);
        }
    }

    printf("\nEnter values for matrix2:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter value for matrix2[%d][%d]: ", i, j);
            scanf("%d", &mainMatrix2[i][j]);
        }
    }

    // Select operation
    int input;
    printf("\nPress 1 for transpose\nPress 2 for addition\nPress 3 for product\n");
    scanf("%d", &input);

    // Perform selected operation
    if (input == 1)
        transposeMatrix(mainMatrix, row, col);
    else if (input == 2)
        additionOfTwoMatrix(mainMatrix, mainMatrix2, row, col);
    else if (input == 3)
        productOfTwoMatrix(mainMatrix, mainMatrix2, row, col);
    else
        printf("Wrong input");

    return 0;
}

// Function to print a matrix
void printMatrix(int mainMatrix[3][3], int row, int col)
{
    printf("Resulting matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", mainMatrix[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate the transpose of a matrix
void transposeMatrix(int mainMatrix[3][3], int row, int col)
{
    int resultMatrix[3][3];

    // Calculate transpose
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            resultMatrix[i][j] = mainMatrix[j][i];
        }
    }

    // Print result
    printMatrix(resultMatrix, row, col);
}

// Function to calculate the addition of two matrices
void additionOfTwoMatrix(int mainMatrix1[3][3], int mainMatrix2[3][3], int row, int col)
{
    int resultMatrix[3][3];

    // Calculate addition
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            resultMatrix[i][j] = mainMatrix1[i][j] + mainMatrix2[i][j];
        }
    }

    // Print result
    printMatrix(resultMatrix, row, col);
}

// Function to calculate the product of two matrices
void productOfTwoMatrix(int mainMatrix1[3][3], int mainMatrix2[3][3], int row, int col)
{
    int resultMatrix[3][3];

    // Initialize result matrix to zeros
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            resultMatrix[i][j] = 0;
        }
    }

    // Calculate product
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < col; k++)
            {
                resultMatrix[i][j] += mainMatrix1[i][k] * mainMatrix2[k][j];
            }
        }
    }

    // Print result
    printMatrix(resultMatrix, row, col);
}
