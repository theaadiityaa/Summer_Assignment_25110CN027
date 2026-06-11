#include<stdio.h>
long int multiplyNumbers(int num) {
    if (num>=1)
        return num*multiplyNumbers(num-1);
    else
        return 1;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num <=0 ) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Factorial of %d = %ld", num, multiplyNumbers(num));
    return 0;
}