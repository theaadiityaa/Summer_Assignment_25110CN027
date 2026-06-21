#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");

    fgets(str, sizeof(str), stdin);

    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    if (end >= 0 && str[end] == '\n')
    {
        str[end] = '\0';
        end--;
    }

    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
