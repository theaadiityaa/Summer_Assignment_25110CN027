#include <stdio.h>
int main() {

    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <=0 ) {
        printf("Invalid input.\n");
        return 1;
    }
    
    int arr[n], visited[n];
    printf("Please enter %d elements of array:\n",n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    printf("\nInput Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    int max_element = arr[0];
    int max_count = 0;

    for (int i = 0; i < n; i++) {

        if (visited[i] == 1) {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        if (count > max_count) {
            max_count = count;
            max_element = arr[i];
        }
    }

    printf("Maximum frequency element in array: %d\nFrequency: %d times", max_element, max_count);

    return 0;
}