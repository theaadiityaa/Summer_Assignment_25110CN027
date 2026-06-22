#include <stdio.h>

int reverseNumber(int num, int reversed) {

    if (num == 0) {
        return reversed;
    }
    
    reversed = (reversed * 10) + (num % 10);
    
    return reverseNumber(num / 10, reversed);
}

int main() {
    int number;

    printf("Enter an integer to reverse: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Initial reversed value is 0
    int result = reverseNumber(number, 0);

    printf("Reversed number: %d\n", result);

    return 0;
}