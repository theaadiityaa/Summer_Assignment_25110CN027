#include <stdio.h>

int main()
{
    char str[1000];
    int frequency[256] = {0};
    int i = 0;

    printf("Enter a string: ");

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {

        if (str[i] != '\n')
        {
            frequency[(unsigned char)str[i]]++;
        }
        i++;
    }

    printf("\nCharacter Frequencies:\n");
    for (i = 0; i < 256; i++)
    {
        if (frequency[i] != 0)
        {

            if (i == ' ')
            {
                printf("[Space] : %d\n", frequency[i]);
            }
            else
            {
                printf("   '%c'  : %d\n", i, frequency[i]);
            }
        }
    }

    return 0;
}
