#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void removeDuplicates(char *str)
{

    bool seen[256] = {false};

    int write_index = 0;
    int read_index = 0;

    while (str[read_index] != '\0')
    {
        unsigned char current_char = str[read_index];

        if (!seen[current_char])
        {
            seen[current_char] = true;
            str[write_index] = str[read_index];
            write_index++;
        }
        read_index++;
    }

    str[write_index] = '\0';
}

int main()
{

    char str[100];
    printf("Enter a string: ");

    fgets(str, sizeof(str), stdin);


    printf("Original String: %s\n", str);

    removeDuplicates(str);

    printf("String after removing duplicates: %s", str);

    return 0;
}
