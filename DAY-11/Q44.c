#include <stdio.h>

 long long findFactorialIterative(int n);

int main() {
    int num;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
         long long result = findFactorialIterative(num);
        printf("Factorial of %d = %lld\n", num, result);
    }
    
    return 0;
}

 long long findFactorialIterative(int n) {
     long long fact = 1;
    
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    
    return fact;
}
