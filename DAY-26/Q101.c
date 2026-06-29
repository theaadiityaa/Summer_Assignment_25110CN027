#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secret_number, user_guess, attempts;
    char choice;
    const int MAX_ATTEMPTS = 5;

    srand(time(0));

    do
    {

        attempts = 0;
        secret_number = (rand() % 100) + 1;

        printf("\n=========================================\n");
        printf("   Welcome to the Number Guessing Game!  \n");
        printf("=========================================\n");
        printf("I chosen a secret number between 1 and 100.\n");
        printf("You have exactly %d attempts to guess it!\n\n", MAX_ATTEMPTS);

        while (attempts < MAX_ATTEMPTS)
        {
            printf("Attempt [%d/%d] - Enter your guess: ", attempts + 1, MAX_ATTEMPTS);

            if (scanf("%d", &user_guess) != 1)
            {
                printf("Invalid input! Please enter a number.\n\n");
                while (getchar() != '\n')
                    ;
                continue;
            }

            attempts++;

            if (user_guess == secret_number)
            {
                printf("\nCONGRATULATIONS! You guessed it!\n");
                printf("The secret number was %d.\n", secret_number);
                printf("You won in %d attempts.\n", attempts);
                break;
            }

            int difference = abs(user_guess - secret_number);

            if (user_guess > secret_number)
            {
                if (difference > 10)
                {
                    printf("Too High!\n\n");
                }
                else
                {
                    printf("Slightly High! (You are close!)\n\n");
                }
            }
            else
            {
                if (difference > 10)
                {
                    printf("Too Low!\n\n");
                }
                else
                {
                    printf("Slightly Low! (You are close!)\n\n");
                }
            }

            if (attempts == MAX_ATTEMPTS)
            {
                printf("\nGAME OVER! You ran out of attempts.\n");
                printf("The correct secret number was %d.\n", secret_number);
            }
        }

        printf("\nWould you like to play again? (y/n): ");
        while (getchar() != '\n')
            ;
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

    printf("\nThank you for playing! Goodbye.\n");
    return 0;
}
