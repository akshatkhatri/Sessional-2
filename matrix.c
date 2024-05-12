#include <stdio.h>
#include <stdlib.h>

void transposeMatrix(int mainMatrix[3][3], int row, int col);
void additionOfTwoMatrix(int mainMatrix1[3][3], int mainMatrix2[3][3], int row, int col);
void productOfTwoMatrix(int mainMatrix1[3][3], int mainMatrix2[3][3], int row, int col);
void printMatrix(int mainMatrix[3][3],int row, int col);

int main()
{
    int row = 3;
    int col = 3;
    int mainMatrix[3][3];
    int mainMatrix2[3][3];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\nEnter value for MATRIX 1  [%d][%d]: ", i, j);
            scanf("%d", &mainMatrix[i][j]);

            printf("\nenter value for MATRIX 2  [%d][%d] ",i,j);
            scanf("%d",&mainMatrix2[i][j]);
        }
    }


    int input;

    printf("press 1 for transpose \n press 2 for addition \n press 3 for multiplication\n");
    scanf("%d",&input);

    if(input ==1)
        transposeMatrix(mainMatrix, row, col);

    else if(input==2)
        additionOfTwoMatrix(mainMatrix, mainMatrix2, row, col);

    else if(input==3)
        productOfTwoMatrix(mainMatrix, mainMatrix2, row, col);

    else
    printf("wrong input");

    return 0;
}
void printMatrix(int mainMatrix[3][3], int row, int col){

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",mainMatrix[i][j]);
        }
        printf("\n");
    }
}
void transposeMatrix(int mainMatrix[3][3], int row, int col)
{
    int resultMatrix[3][3];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            resultMatrix[i][j]= mainMatrix[j][i];
        }
    }

    printMatrix(resultMatrix,row,col);
}

void additionOfTwoMatrix(int mainMatrix[3][3], int mainMatrix2[3][3], int row, int col)
{
    int resultMatrix[3][3];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            resultMatrix[i][j]=mainMatrix[i][j] + mainMatrix2[i][j];
        }
        printf("\n");
    }

    printMatrix(resultMatrix,row,col);
}

void productOfTwoMatrix(int mainMatrix1[3][3], int mainMatrix2[3][3], int row, int col) {
    int resultMatrix[3][3];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < col; k++) {
                resultMatrix[i][j] += mainMatrix1[i][k] * mainMatrix2[k][j];
            }
        }
    }

    printMatrix(resultMatrix, row, col);
}
