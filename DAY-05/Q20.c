#include <stdio.h>

//Defining a function to find largest ptime factor
int large_PF(int n) {
    int max_prime;
    //Remove all factors of 2
    while (n % 2 == 0) {
        max_prime = 2;
        n /= 2;
    }

    //Check odd factors up to the square root of n
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            max_prime = i;
            n /= i;
        }
    }

    //If n is still greater than 2, then n itself is prime
    if (n > 2) {
        max_prime = n;
    }

    return max_prime;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num <= 1) {
        printf("Please enter a valid integer greater than 1.\n");
        return 1;
    }

    int result = large_PF(num);
    printf("The largest prime factor of %d is: %d\n", num, result);

    return 0;
}
