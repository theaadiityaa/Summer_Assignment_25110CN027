#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool isRotation(const char *str1, const char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
    {
        return false;
    }

    char *temp = (char *)malloc(sizeof(char) * (len1 * 2 + 1));
    if (temp == NULL)
    {
        printf("Memory allocation failed.\n");
        return false;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    bool result = (strstr(temp, str2) != NULL);

    free(temp);

    return result;
}

int main()
{
    char str1[] = "ABCD";
    printf("String 1:%s\n", str1);
    char str2[] = "CDAB";
    printf("String 2:%s\n", str2);

    if (isRotation(str1, str2))
    {
        printf("\"%s\" is a rotation of \"%s\"\n", str2, str1);
    }
    else
    {
        printf("\"%s\" is NOT a rotation of \"%s\"\n", str2, str1);
    }

    return 0;
}
