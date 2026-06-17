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

void leftRotate(int arr[], int d, int n) {
    if (n == 0) return;
    
    d = d % n; 
    
    reverse(arr, 0, d - 1);
    
    reverse(arr, d, n - 1);
    
    reverse(arr, 0, n - 1);
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

    printf("Enter number of positions to rotate left: ");
    scanf("%d",&d);

    leftRotate(arr, d, n);

    printf("Array after left rotation by %d positions: \n", d);
    printArray(arr, n);

    return 0;
}