#include <stdio.h>

long long int fibonacciSeries( int n);

int main() {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series upto %d terms: ",terms);

    fibonacciSeries(terms);

    return 0;
}

long long int fibonacciSeries( int n){

    int first = 0, second = 1;
    long long int next;

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // The first two terms are 0 and 1
        }
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%lld ", next);
    }

    printf("\n");

    return 0;
}