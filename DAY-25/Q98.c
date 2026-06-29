#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findCommonCharacters(char *str1, char *str2)
{

    int charCheck[256] = {0};
    int found = 0;

    for (int i = 0; str1[i] != '\0'; i++)
    {
        charCheck[toupper((unsigned char)str1[i])] = 1;
    }

    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (charCheck[toupper((unsigned char)str2[i])] == 1)
        {
            charCheck[toupper((unsigned char)str2[i])] = 2;
        }
    }

    printf("Common characters: ");
    for (int i = 0; i < 256; i++)
    {
        if (charCheck[i] == 2)
        {
            printf("%c ", i);
            found = 1;
        }
    }

    if (!found)
    {
        printf("None");
    }
    printf("\n");
}

int main()
{
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    findCommonCharacters(str1, str2);

    return 0;
}
