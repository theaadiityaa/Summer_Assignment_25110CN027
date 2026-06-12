#include <stdio.h>

int isPalindrome(int num);

int main() {
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    isPalindrome(num);

    return 0;
}

int isPalindrome(int num){
    int org_num, remainder, rev_num = 0;
    
    org_num = num;

    while (num > 0) {
        remainder = num % 10;
        rev_num = rev_num * 10 + remainder;
        num = num / 10;
    }

    if (org_num == rev_num) {
        printf("%d is a palindrome number.\n", org_num);
    } else {
        printf("%d is not a palindrome number.\n", org_num);
    return 0;
}}