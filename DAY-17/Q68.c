#include <stdio.h>

void findCommon(int arr1[], int size1, int arr2[], int size2)
{

    int visited[100] = {0};
    int foundCommon = 0;

    printf("\nCommon elements: ");

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {

            if (arr1[i] == arr2[j] && visited[j] == 0)
            {
                printf("%d ", arr1[i]);
                visited[j] = 1;
                foundCommon = 1;
                break;
            }
        }
    }

    if (!foundCommon)
    {
        printf("None");
    }
    printf("\n");
}

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

    int n1, n2, i;

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

    findCommon(arr1, n1, arr2, n2);

    return 0;
}
