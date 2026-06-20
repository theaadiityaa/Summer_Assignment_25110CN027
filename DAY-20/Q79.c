#include <stdio.h>

int main()
{
    int rows, cols;
    int rowSum;

    printf("Enter the number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0)
    {
        printf("Invalid entries.\n");
        return 1;
    }
    int matrix[rows][cols];

    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n--- Row-wise Sums ---\n");
    for (int i = 0; i < rows; i++)
    {
        rowSum = 0;
        for (int j = 0; j < cols; j++)
        {
            rowSum += matrix[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }

    return 0;
}
