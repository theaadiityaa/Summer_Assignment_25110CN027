#include <stdio.h>

int checkforprime(int num);

int main() {
    int num, result;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    result = checkforprime(num);

    if (result == 1) {
        printf("%d is a prime number.\n", num);
    }
    else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}

int checkforprime(int num){
    int i, isPrime = 1;
    if (num <= 1) {
        isPrime = 0;
    } else {

        for (i = 2; i <= num/2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    return isPrime;

}