#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Make the number positive if it is negative
    int temp = (num < 0) ? -num : num;

    do {
        count++;
        temp /= 10;
    } while (temp != 0);

    printf("Total number of digits in %d is: %d\n", num, count);

    return 0;
}
