#include <stdio.h>

void removeSpaces(char *str)
{
    int read = 0;
    int write = 0;

    while (str[read] != '\0')
    {

        if (str[read] != ' ')
        {
            str[write] = str[read];
            write++;
        }
        read++;
    }

    str[write] = '\0';
}

int main()
{

    char str[100];

    printf("Enter a string: ");

    if (fgets(str, sizeof(str), stdin) != NULL)
    {

        removeSpaces(str);

        printf("Modified string: %s", str);

        return 0;
    }
}
