#include <stdio.h>

int main() {
    int n, i, largest, smallest;

    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <=0 ) {
        printf("Invalid input.\n");
        return 1;
    }

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest
        }
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update smallest
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}
