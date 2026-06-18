#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter the number of elements currently in the array: ");
    if (scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size];
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");

    printf("Input Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    int ActualSize = max - min + 1;

    int *present = (int *)calloc(ActualSize, sizeof(int));
    if (present == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        int trackingIndex = arr[i] - min;
        present[trackingIndex] = 1;
    }

    printf("\n--- Results ---\n");
    printf("Detected Range of input array: %d to %d\n", min, max);
    printf("Missing numbers: ");

    int missingCount = 0;
    for (int i = 0; i < ActualSize; i++)
    {
        if (present[i] == 0)
        {
            printf("%d ", min + i);
            missingCount++;
        }
    }

    if (missingCount == 0)
    {
        printf("No missing terms! The sequence is perfectly continuous.");
    }
    printf("\n");

    free(present);

    return 0;
}
