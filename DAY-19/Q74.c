#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0)
    {
        printf("Invalid entries.\n");
        return 1;
    }
    int a[r][c], b[r][c], diff[r][c];

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    // Loop for Subtraction
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            diff[i][j] = a[i][j] - b[i][j];

    printf("Resultant Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }

    return 0;
}
