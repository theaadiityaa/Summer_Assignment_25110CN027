#include <stdio.h>

int main() {
    int num, org_num, remainder, rev_num = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);

    // Store the original number to compare later
    org_num = num;

    // Reverse the digits of the number
    while (num > 0) {
        remainder = num % 10;
        rev_num = rev_num * 10 + remainder;
        num = num / 10;
    }

    // Check if the original number matches the reversed number
    if (org_num == rev_num) {
        printf("%d is a palindrome number.\n", org_num);
    } else {
        printf("%d is not a palindrome number.\n", org_num);
    }

    return 0;
}
