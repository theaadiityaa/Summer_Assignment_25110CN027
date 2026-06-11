#include <stdio.h>

int findMaximum(int num1, int num2);

int main() {
    int a, b, max;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    max = findMaximum(a, b);

    printf("The maximum number between %d and %d is: %d\n", a, b, max);

    return 0;
}

int findMaximum(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}
