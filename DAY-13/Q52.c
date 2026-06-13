#include <stdio.h>

int main() {
    int n , i;
    int even_count = 0;
    int odd_count = 0;

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

    for(i = 0; i < n ; i++) {

        if(arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("\nTotal no. of Even elements: %d\n", even_count);
    printf("Total no. of Odd elements: %d\n", odd_count);

    return 0;
}
