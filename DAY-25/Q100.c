#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LENGTH 50

int compare_word_lengths(const void *a, const void *b)
{

    size_t length_a = strlen((const char *)a);
    size_t length_b = strlen((const char *)b);

    if (length_a < length_b)
        return -1;
    if (length_a > length_b)
        return 1;
    return 0;
}

int main()
{
    int num_words;
    char words[MAX_WORDS][MAX_LENGTH];

    printf("Enter the number of words (up to %d): ", MAX_WORDS);
    if (scanf("%d", &num_words) != 1 || num_words <= 0 || num_words > MAX_WORDS)
    {
        printf("Invalid number of words.\n");
        return 1;
    }

    printf("Enter %d words:\n", num_words);
    for (int i = 0; i < num_words; i++)
    {
        printf("%d: ", i + 1);
        scanf("%s", words[i]);
    }

    qsort(words, num_words, sizeof(words[0]), compare_word_lengths);

    printf("\nWords sorted by length:\n");
    for (int i = 0; i < num_words; i++)
    {
        printf("%d: %s\n", i +1, words[i]);
    }

    return 0;
}