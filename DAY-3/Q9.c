#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Numbers <= 1 are not prime
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check divisibility from 2 up to half of the number
        for (i = 2; i <= num/2; i++) {
            if (num % i == 0) {
                isPrime = 0; // A factor found for given number
                break;       // Exit loop
            }
        }
    }

    if (isPrime == 1) {
        printf("%d is a prime number.\n", num);
    }
    else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}