#include <stdio.h>

int main() {
    int num, originalNum, rem, sum = 0;
    long fact;

    printf("Enter a whole number: ");
    scanf("%d", &num);

    if (num < 0){
        printf("Please enter a valid number!!");
    }
    else{

    originalNum = num;

    // 0! = 1
    if (num == 0) {
        sum = 1;
    }

    while (num > 0) {
        rem = num % 10;
        fact = 1;

        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }

        sum += fact;    // Add factorial to sum
        num /= 10;
    }

    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is not a Strong Number.\n", originalNum);
    }
    }

    return 0;
}