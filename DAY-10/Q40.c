#include <stdio.h>

int main() {
    int rows, i, j, k;

    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows > 26 ) {
        printf("Invalid input.\n");
        return 1;
    }

    for (i = 1; i <= rows; i++) {

        for (k = 1; k <= rows - i; k++) {
            printf(" ");
        }

        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        for (j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}
