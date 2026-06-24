#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LIMIT 200

int main()
{
    char sentence[MAX_LIMIT];
    char longest_word[MAX_LIMIT] = "";
    char current_word[MAX_LIMIT];

    int i = 0, j = 0;
    int max_len = 0;

    printf("Enter a sentence: ");

    if (fgets(sentence, sizeof(sentence), stdin) == NULL)
    {
        return 1;
    }

    while (sentence[i] != '\0')
    {

        if (isalnum((unsigned char)sentence[i]))
        {
            current_word[j++] = sentence[i];
        }

        else
        {
            if (j > 0)
            {
                current_word[j] = '\0';

                if (j > max_len)
                {
                    max_len = j;
                    strcpy(longest_word, current_word);
                }
                j = 0;
            }
        }
        i++;
    }

    if (j > max_len)
    {
        current_word[j] = '\0';
        max_len = j;
        strcpy(longest_word, current_word);
    }

    if (max_len > 0)
    {
        printf("\nThe longest word is: \"%s\"\n", longest_word);
        printf("Length: %d characters\n", max_len);
    }
    else
    {
        printf("\nNo valid words found.\n");
    }

    return 0;
}
