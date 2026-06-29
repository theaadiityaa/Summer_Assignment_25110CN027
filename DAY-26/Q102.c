#include <stdio.h>

int main()
{
    int age;
    char citizen;

    printf("\n=================================================\n");
    printf("   Welcome to the Voting Eligibility System!  \n");
    printf("=================================================\n");
    printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Are you a citizen of this region? (y/n): ");
    scanf(" %c", &citizen);

    if (age >= 18 && (citizen == 'y' || citizen == 'Y'))
    {
        printf("Congratulations! You are eligible to vote.\n");
    }
    else
    {
        printf("Sorry, you are not eligible to vote.\n");

        if (age < 18)
        {
            printf("Reason: You must be at least 18 years old.\n");
        }
        if (citizen != 'y' && citizen != 'Y')
        {
            printf("Reason: You must be a citizen to vote.\n");
        }
    }

    return 0;
}
