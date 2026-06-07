#include <stdio.h>

int main() {
    int num1, num2, temp, lcm;

    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d",&num2);

    //First find GCD using Euclidean Algorithm 
    int a = num1;
    int b = num2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    // The GCD is stored in 'a' once 'b' becomes 0
 
    //Now calculating LCM
    lcm = (num1 * num2) / a;
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}