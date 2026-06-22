#include <stdio.h>

int sumOfDigits(int num);

int main() {
    int number, result;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handle negative numbers by converting them to positive
    if (number < 0) {
        number = -number;
        printf("Negative sign is removed.\n");
    }

    result = sumOfDigits(number);

    printf("Sum of digits: %d\n", result);

    return 0;
}

// Recursive function to calculate sum of digits
int sumOfDigits(int num) {

    if (num == 0) {
        return 0;
    }
    
    return (num % 10) + sumOfDigits(num / 10);
}
