#include <stdio.h>

int main() {
    int num, digit, product = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // If the number is 0, the product of its digits is 0
    if (num == 0) {
        product = 0;
    }
    else {
        while (num != 0) {
            digit = num % 10;
            product = product * digit;
            num = num / 10;
        }
    }

    printf("Product of the digits: %d\n", product);

    return 0;
}
