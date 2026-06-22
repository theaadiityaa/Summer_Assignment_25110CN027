#include <stdio.h>
#include <math.h>

int main() {
    int num, remainder, digits = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Find the total number of digits
    if (num == 0) {
        digits = 1;
    } else {
        // log10 returns double; truncating it finds the lower boundary
        digits = (int)log10(num) + 1;
    }
    
    int temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += round(pow(remainder, digits));
        temp /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}