#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

int main()
{
    char str[100];
    int freq[ASCII_SIZE] = {0};
    int i, max_count;
    char max_char;

    printf("Enter a string: ");

    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {

        unsigned char index = (unsigned char)str[i];
        freq[index]++;
    }

    max_count = 0;
    max_char = str[0];

    for (i = 0; str[i] != '\0'; i++)
    {
        unsigned char index = (unsigned char)str[i];
        if (freq[index] > max_count)
        {
            max_count = freq[index];
            max_char = str[i];
        }
    }

    if (max_count > 1)
    {
        printf("The maximum occurring character is '%c' and it appears %d times.\n", max_char, max_count);
    }
    else
    {
        printf("No repeating characters or the string is empty.\n");
    }

    return 0;
}
