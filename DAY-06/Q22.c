#include <stdio.h>

int main() {
    long long binary_num;
    int decimal_num = 0, base = 1, remainder;

    printf("Enter a binary number (containing only 0s and 1s): ");
    scanf("%lld", &binary_num);


    //convert binary to decimal
    while (binary_num > 0) {
        remainder = binary_num % 10;
        decimal_num += remainder * base;
        binary_num /= 10;
        base *= 2;
    }

    printf("Decimal equivalent: %d\n", decimal_num);

    return 0;
}
