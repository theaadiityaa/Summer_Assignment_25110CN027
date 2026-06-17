#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <=0 ) {
        printf("Invalid input.\n");
        return 1;
    }

    int arr[n];
    int visited[n]; // Array to track processed elements

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        visited[i] = 0; // 0 means the element has not been counted yet
        
    }

    printf("\nFrequency of each Element\n");
    printf("---------------------\n");

    for(i = 0; i < n; i++) {

        if(visited[i] == 1) {
            continue;
        }

        count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("   %d     |      %d\n", arr[i], count);
    }

    return 0;
}
