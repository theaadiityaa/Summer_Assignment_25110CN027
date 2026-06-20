#include <stdio.h>

int main()
{
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns for the first matrix: ");
    if (scanf("%d %d", &r1, &c1) != 2 || r1 <= 0 || c1 <= 0)
    {
        printf("Invalid entries.\n");
        return 1;
    }
    int first[r1][c1];

    printf("Enter rows and columns for the second matrix: ");
    if (scanf("%d %d", &r2, &c2) != 2 || r2 <= 0 || c2 <= 0)
    {
        printf("Invalid entries.\n");
        return 1;
    }

    int second[r2][c2];

    if (c1 != r2)
    {
        printf("Error! Column of first matrix must equal row of second matrix.\n");
        return 1;
    }

    printf("\nEnter elements of the first matrix:\n");
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c1; ++j)
        {
            scanf("%d", &first[i][j]);
        }
    }

    printf("\nEnter elements of the second matrix:\n");
    for (i = 0; i < r2; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            scanf("%d", &second[i][j]);
        }
    }

    int result[r1][c2];

    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            result[i][j] = 0;
            for (k = 0; k < c1; ++k)
            {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    printf("\nResultant Matrix:\n");
    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
