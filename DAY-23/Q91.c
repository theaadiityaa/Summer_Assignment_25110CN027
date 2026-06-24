#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_anagram(const char *str1, const char *str2)
{
    int count[256] = {0};
    int i;

    if (strlen(str1) != strlen(str2))
    {
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++)
    {
        unsigned char c1 = (unsigned char)tolower((unsigned char)str1[i]);
        unsigned char c2 = (unsigned char)tolower((unsigned char)str2[i]);

        count[c1]++;
        count[c2]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter the first string: ");
    scanf("%99s", str1); // 99 is used to prevent buffer overflow

    printf("Enter the second string: ");
    scanf("%99s", str2);

    if (check_anagram(str1, str2))
    {
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    }
    else
    {
        printf("\"%s\" and \"%s\" are NOT anagrams.\n", str1, str2);
    }

    return 0;
}
