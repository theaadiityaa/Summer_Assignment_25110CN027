#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_QUESTION_LEN 256
#define MAX_OPTION_LEN 128
#define TOTAL_QUESTIONS 15

typedef struct
{
    char question_text[MAX_QUESTION_LEN];
    char options[4][MAX_OPTION_LEN];
    char correct_option;
} QuizQuestion;

int main()
{

    QuizQuestion quiz[TOTAL_QUESTIONS] = {
        {"Which programming language is known as the mother of all languages?",
         {"A. Python", "B. Java", "C. C", "D. Assembly"},
         'C'},
        {"What is the only country that is also a continent?",
         {"A. Russia", "B. Australia", "C. Canada", "D. Brazil"},
         'B'},
        {"Which planet is known as the Red Planet?",
         {"A. Earth", "B. Mars", "C. Jupiter", "D. Saturn"},
         'B'},
        {"What is the chemical symbol for Gold?",
         {"A. Gd", "B. Ag", "C. Pt", "D. Au"},
         'D'},
        {"What is the capital of India?",
         {"A. Mumbai", "B. New Delhi", "C. Kolkata", "D. Chennai"},
         'B'},
        {"Which gas do plants absorb from the atmosphere during photosynthesis?",
         {"A. Oxygen", "B. Carbon Dioxide", "C. Nitrogen", "D. Hydrogen"},
         'B'},
        {"What is the largest ocean on Earth?",
         {"A. Atlantic Ocean", "B. Indian Ocean", "C. Arctic Ocean", "D. Pacific Ocean"},
         'D'},
        {"Who wrote the world famousplay 'Romeo and Juliet'?",
         {"A. Charles Dickens", "B. William Shakespeare", "C. Mark Twain", "D. Jane Austen"},
         'B'},
        {"What is the hardest natural substance on Earth?",
         {"A. Gold", "B. Iron", "C. Diamond", "D. Quartz"},
         'C'},
        {"Which organ in the human body is responsible for pumping blood?",
         {"A. Brain", "B. Lungs", "C. Heart", "D. Liver"},
         'C'},
        {"What is the largest planet in our solar system?",
         {"A. Earth", "B. Jupiter", "C. Saturn", "D. Neptune"},
         'B'},
        {"Which element has the chemical symbol 'O'?",
         {"A. Gold", "B. Oxygen", "C. Silver", "D. Hydrogen"},
         'B'},
        {"What is the main ingredient in traditional Indian Kheer?",
         {"A. Mustard Oil", "B. Paneer", "C. Jaggery", "D. Rice"},
         'D'},
        {"Which country is known as the Land of diversity?",
         {"A. China", "B. India", "C. Russia", "D. Brazil"},
         'B'},
        {"What is the smallest prime number?",
         {"A. 0", "B. 1", "C. 2", "D. 3"},
         'C'}};

    int score = 0;
    char user_guess;

    printf("==========================================\n");
    printf("     WELCOME TO THE QUIZ APPLICATION     \n");
    printf("==========================================\n\n");

    for (int i = 0; i < TOTAL_QUESTIONS; i++)
    {
        printf("Question %d: %s\n", i + 1, quiz[i].question_text);

        for (int j = 0; j < 4; j++)
        {
            printf("  %s\n", quiz[i].options[j]);
        }

        printf("Your Answer (A, B, C, or D): ");

        scanf(" %c", &user_guess);

        user_guess = toupper(user_guess);

        if (user_guess == quiz[i].correct_option)
        {
            printf("\n   Correct! Excellent job.\n");
            score++;
        }
        else
        {
            printf("\n   Wrong! The correct answer was %c.\n", quiz[i].correct_option);
        }

        printf("------------------------------------------\n\n");
    }

    float percentage = ((float)score / TOTAL_QUESTIONS) * 100;

    printf("==========================================\n");
    printf("                QUIZ OVER                 \n");
    printf("==========================================\n");
    printf(" Your Final Score: %d out of %d\n", score, TOTAL_QUESTIONS);
    printf(" Percentage Grade: %.2f%%\n", percentage);
    printf("==========================================\n");

    return 0;
}