#include <stdio.h>

void pairSum(int arr[], int size, int target) {
    int found = 0;

    for (int i = 0; i < size - 1; i++) {

        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No pair found with the given sum.\n");
    }
}

int main() {

    int n, target;

    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <=0 ) {
        printf("Invalid input.\n");
        return 1;
    }

    int arr[n];
    
    printf("Please enter %d elements of array: ",n);
 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
    }

    printf("Input Array is: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter target value: ");
    scanf("%d",&target);

    pairSum(arr, n, target);

    return 0;
}
