#include <stdio.h>

int countSetBits(int n) {

    //Using Karnighan's Algoithm
    int count = 0;
    while (n > 0) {
        n &= (n - 1); // Clears the lowest set bit
        count++;
    }
    return count;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num <=0 ) {
        printf("Invalid input.\n");
        return 1;
    }

    int result = countSetBits(num);
    
    printf("Binary representation of %d has %d set bits\n", num, result);

    return 0;
}