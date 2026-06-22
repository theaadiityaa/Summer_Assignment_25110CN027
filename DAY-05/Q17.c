#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    //A perfect number is a positive number always greater than 1.
    if (num <= 1){
        printf("Please enter a valid positive number!!");
    }
    else{
        for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i; // Add divisor to sum
        }
    }

    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is NOT a perfect number.\n", num);
    }
    }
}