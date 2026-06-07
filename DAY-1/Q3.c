#include <stdio.h>

int main() {
    int n;
    unsigned long long fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    //Factorial is not defined for negative numbers
    if (n < 0) {
        printf("Factorial of a negative number is not defined.\nPlease enter a positive number.");
    } else {
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d is %llu\n", n, fact);
    }

    return 0;
}
