#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;

    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <=0 ) {
        printf("Invalid input.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        
        sum += arr[i];
    }

    average = sum / n;

    printf("Sum of elements = %.2f\n", sum);
    printf("Average of elements = %.2f\n", average);

    return 0;
}