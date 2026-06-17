#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rightRotate(int arr[], int n, int k) {

    k = k % n;
    
    if (k == 0) return;

    reverse(arr, 0, n - 1);

    reverse(arr, 0, k - 1);

    reverse(arr, k, n - 1);
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
     int n, d;

    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <=0 ) {
        printf("Invalid input.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        
    }

    printf("Original array: \n");
    printArray(arr, n);

    printf("Enter number of positions to rotate right: ");
    scanf("%d",&d);

    rightRotate(arr, n, d);

    printf("Array after right rotation by %d positions: \n", d);
    printArray(arr, n);

    return 0;
}