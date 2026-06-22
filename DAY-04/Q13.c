#include <stdio.h>

int main() {
    int terms, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series upto %d terms: ",terms);

    for (int i = 0; i < terms; i++) {
        if (i <= 1) {
            next = i; // The first two terms are 0 and 1
        }
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");
    return 0;
}