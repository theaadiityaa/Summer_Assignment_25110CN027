#include <stdio.h>

int main()
{

    int size;

    printf("Enter number of elements in the array: ");
    if (scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Input Array is: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {

            if (arr[i] == arr[j])
            {

                for (int k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                size--;

                j--;
            }
        }
    }

    printf("\nArray after removing duplicates:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
