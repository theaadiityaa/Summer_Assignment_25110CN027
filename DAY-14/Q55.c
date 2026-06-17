#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int size) {

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < size; i++) {
        
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        
        else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int n ;

    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n < 2 ) {
        printf("Invalid input.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        
    }
    
    int result = findSecondLargest(arr, n);

    if (result == INT_MIN) {
        printf("There is no second largest distinct element.\n");
    } else {
        printf("The second largest element is: %d\n", result);
    }

    return 0;
}