#include <stdio.h>
#include <math.h>

int main() {
    int start, end, i, remainder, digits = 0, result = 0;

    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    printf("\nArmstrong numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++){
    
        // Find the total number of digits
    if (i == 0) {
        digits = 1;
    } else {
        // log10 returns double; truncating it finds the lower boundary
        digits = (int)log10(i) + 1;
    }
    
    int temp = i;
    while (temp != 0) {
        remainder = temp % 10;
        result += round(pow(remainder, digits));
        temp /= 10;
    }
    if (result == i){
        printf("%d ",result);
    }
    result = 0;
    }
    return 0;
}