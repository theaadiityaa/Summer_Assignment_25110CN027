#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    //input the limits of the range
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    printf("\nPrime numbers between %d and %d are:\n", start, end);

    // Loop in the given range
    for (i = start; i <= end; i++) {
        // Numbers <= 1 are not prime
        if (i <= 1) {
            continue;
        }

        isPrime = 1; //Assuming that given number is prime initially

        // Check if 'i' is divisible by any number from 2 up to i/2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // Found a factor, so it's not prime
                break;       // Exit the inner loop early
            }
        }

        // If isPrime is still 1, the number is prime
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
