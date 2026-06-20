#include <stdio.h>

int main()
{
    int size;
    int principal_sum = 0;
    int secondary_sum = 0;

    printf("Enter the size of the square matrix: ");
    if (scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }
    int matrix[size][size];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        principal_sum += matrix[i][i];
        secondary_sum += matrix[i][size - i - 1];
    }

    printf("\n--- Result ---\n");
    printf("Sum of Principal Diagonal: %d\n", principal_sum);
    printf("Sum of Secondary Diagonal: %d\n", secondary_sum);

    return 0;
}
