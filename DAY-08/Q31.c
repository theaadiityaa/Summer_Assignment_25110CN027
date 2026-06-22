#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows > 26 ) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            // 'A' has an ASCII value of 65; adding j shifts to the next character
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
