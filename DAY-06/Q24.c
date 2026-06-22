#include <stdio.h>

int main() {
    float x;
    int n;

    printf("Enter base (x): ");
    scanf("%f", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);

    float result = 1.0;

    // Handle negative exponents
    if (n < 0) {
        n = -n;
        x = 1.0 / x;
    }

    // Multiply x exactly n times
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    
    printf("%.3f raised to the power of %d is: %.3f\n", x, n, result);

    return 0;
}