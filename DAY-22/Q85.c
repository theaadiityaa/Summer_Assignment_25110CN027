#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[])
{
    int low = 0;
    int high = strlen(str) - 1;

    while (high > low)
    {
        if (str[low] != str[high])
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}

int main()
{
    char str[100];

    printf("Enter a string: ");

    if (fgets(str, sizeof(str), stdin) != NULL)
    {

        str[strcspn(str, "\n")] = '\0';

        if (isPalindrome(str))
        {
            printf("\"%s\" is a palindrome.\n", str);
        }
        else
        {
            printf("\"%s\" is not a palindrome.\n", str);
        }
    }

    return 0;
}
