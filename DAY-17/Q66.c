#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n1, n2, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter %d elements for the first array: ", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("First Array is: ");
    printArray(arr1, n1);

    printf("\nEnter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter %d elements for the second array: ", n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("Second Array is: ");
    printArray(arr2, n2);

    int mergedSize = n1 + n2;
    int mergedArr[mergedSize];

    for (i = 0; i < n1; i++)
    {
        mergedArr[i] = arr1[i];
    }

    for (i = 0; i < n2; i++)
    {
        mergedArr[n1 + i] = arr2[i];
    }

    for (i = 0; i < mergedSize; i++)
    {
        for (j = i + 1; j < mergedSize; j++)
        {

            if (mergedArr[i] == mergedArr[j])
            {

                for (k = j; k < mergedSize - 1; k++)
                {
                    mergedArr[k] = mergedArr[k + 1];
                }

                mergedSize--;

                j--;
            }
        }
    }
    printf("\nUnion Array is: ");
    printArray(mergedArr, mergedSize);

    return 0;
}