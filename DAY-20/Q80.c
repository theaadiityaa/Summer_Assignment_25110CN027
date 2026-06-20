#include <stdio.h>

int main()
{
    int rows, cols;

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

    printf("\n--- Column-wise Sums ---\n");

    for (int j = 0; j < cols; j++)
    {
        int col_sum = 0;

        for (int i = 0; i < rows; i++)
        {
            col_sum += matrix[i][j];
        }

        printf("Sum of Column %d = %d\n", j + 1, col_sum);
    }

    return 0;
}
