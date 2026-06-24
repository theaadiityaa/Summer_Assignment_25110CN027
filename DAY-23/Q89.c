#include <stdio.h>
#include <string.h>


char findFirstNonRepeating(char *str)
{
    int frequency[256] = {0}; // 256 is taken because there are 256 ASCII characters

    for (int i = 0; str[i] != '\0'; i++)
    {

        frequency[(unsigned char)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (frequency[(unsigned char)str[i]] == 1)
        {
            return str[i];
        }
    }

    return '\0';
}

int main()
{
    char str[100];

    printf("Enter a string: ");

    if (fgets(str, sizeof(str), stdin))
    {
        str[strcspn(str, "\n")] = '\0';
    }

    char result = findFirstNonRepeating(str);

    if (result != '\0')
    {
        printf("The first non-repeating character is: '%c'\n", result);
    }
    else
    {
        printf("All characters are repeating or the string is empty.\n");
    }

    return 0;
}
