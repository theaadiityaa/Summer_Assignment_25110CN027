#include <stdio.h>

int main() {
    int size;

    printf("Enter the side length of the square: ");
    scanf("%d", &size);

    for(int i = 1; i <= size; i++) {

        for(int j = 1; j <= size; j++) {
            // Print star only for borders
            if(i == 1 || i == size || j == 1 || j == size) {
                printf("* ");
            } else {
                printf("  "); // Print two spaces for hollow center
            }
        }

        printf("\n");
    }

    return 0;
}
