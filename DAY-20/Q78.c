#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int isSymmetric = 1;

    printf("Enter the number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0)
    {
        printf("Invalid entries.\n");
        return 1;
    }

    if (rows != cols)
    {
        printf("The matrix is NOT symmetric.\nIt must be a square matrix.\n");
        return 0;
    }

    int matrix[rows][cols];

    printf("Enter the elements of the matrix :\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (scanf("%d", &matrix[i][j]) != 1)
            {
                printf("Invalid element input.\n");
                return 1;
            }
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
        {
            break;
        }
    }

    if (isSymmetric)
    {
        printf("\nThe given matrix is a SYMMETRIC matrix.\n");
    }
    else
    {
        printf("\nThe given matrix is NOT a symmetric matrix.\n");
    }

    return 0;
}
