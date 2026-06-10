#include <stdio.h>

void decimalToBinary(int n) {
    //Using array to store binary digits
    int binaryNum[32];
    int i = 0;

    //base case for n = 0
    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Printing the array in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    if (scanf("%d", &decimalNumber) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Binary equivalent: ");
    decimalToBinary(decimalNumber);
    printf("\n");

    return 0;
}
