#include <stdio.h>

int main() {
    int term, first = 0, second = 1, next;

    printf("Enter the number: ");
    scanf("%d", &term);

    for (int i = 0; i < term; i++) {
        if (i <= 1) {
            next = i; // The first two terms are 0 and 1
        }
        else {
            next = first + second;
            first = second;
            second = next;
        }
        
    }
    printf("The %d-th Fibonacci term is: %d\n", term, next);

    return 0;
}