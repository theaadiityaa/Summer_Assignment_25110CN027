#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size, target, result;

    printf("Enter size of array: ");
    if (scanf("%d", &size) != 1 || size <=0 ) {
        printf("Invalid input.\n");
        return 1;
    }

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        
    }

    printf("Enter the value to search for: ");
    scanf("%d", &target);

    result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index value: %d \nPosition is: %d\n", result, result + 1);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
