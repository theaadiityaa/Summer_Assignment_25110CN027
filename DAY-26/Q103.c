#include <stdio.h>
#include <stdbool.h>

double balance = 5000.00;
const int CORRECT_PIN = 1234;

void checkBalance();
void depositMoney();
void withdrawMoney();
bool authenticateUser();

int main()
{
    int choice;

    printf("===========================================\n");
    printf("        WELCOME TO THE INDIAN BANK         \n");
    printf("===========================================\n");
    printf("Please insert your ATM card to proceed...\n");
    printf("[INFO] Default System PIN for testing is: %d\n\n", CORRECT_PIN);

    if (!authenticateUser())
    {
        printf("\n[ERROR] Too many incorrect attempts. Your card has been blocked.\n");
        printf("Please contact your Indian Bank branch. Exiting...\n");
        return 0;
    }

    do
    {
        printf("\n************ ATM SERVICE MENU ************\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Cash\n");
        printf("3. Withdraw Cash\n");
        printf("4. Exit Terminal\n");
        printf("******************************************\n");
        printf("Enter your choice (1-4): ");

        if (scanf("%d", &choice) != 1)
        {
            printf("\n[ERROR] Invalid input format. Please enter a number.\n");
            while (getchar() != '\n')
                ;
            continue;
        }

        switch (choice)
        {
        case 1:
            checkBalance();
            break;
        case 2:
            depositMoney();
            break;
        case 3:
            withdrawMoney();
            break;
        case 4:
            printf("\nThank you for using Indian Bank ATM. Please collect your card!\n");
            break;
        default:
            printf("\n[ERROR] Invalid selection. Please choose an option between 1 and 4.\n");
        }
    } while (choice != 4);

    return 0;
}

bool authenticateUser()
{
    int enteredPin;
    int attempts = 0;
    const int MAX_ATTEMPTS = 3;

    while (attempts < MAX_ATTEMPTS)
    {
        printf("Please enter your 4-digit secret PIN: ");
        if (scanf("%d", &enteredPin) != 1)
        {
            printf("Invalid format. ");
            while (getchar() != '\n')
                ;
            attempts++;
            continue;
        }

        if (enteredPin == CORRECT_PIN)
        {
            return true;
        }
        else
        {
            attempts++;
            printf("[WARNING] Incorrect PIN. Remaining attempts: %d\n\n", MAX_ATTEMPTS - attempts);
        }
    }
    return false;
}

void checkBalance()
{
    printf("\n>>> CURRENT BALANCE: RS. %.2f\n", balance);
}

void depositMoney()
{
    double depositAmount;
    printf("\nEnter amount to deposit: RS. ");

    if (scanf("%lf", &depositAmount) != 1 || depositAmount <= 0)
    {
        printf("[ERROR] Transaction failed. Invalid deposit amount.\n");
        while (getchar() != '\n')
            ;
        return;
    }

    balance += depositAmount;
    printf("[SUCCESS] RS. %.2f deposited successfully.\n", depositAmount);
    printf("Updated Balance: RS. %.2f\n", balance);
}

void withdrawMoney()
{
    double withdrawAmount;
    printf("\nEnter amount to withdraw: RS. ");

    if (scanf("%lf", &withdrawAmount) != 1 || withdrawAmount <= 0)
    {
        printf("[ERROR] Transaction failed. Invalid withdrawal amount.\n");
        while (getchar() != '\n')
            ;
        return;
    }

    if (withdrawAmount > balance)
    {
        printf("[ERROR] Transaction failed. Insufficient funds!\n");
        printf("Available balance is only: RS. %.2f\n", balance);
    }
    else
    {
        balance -= withdrawAmount;
        printf("[SUCCESS] Please collect your cash.\n");
        printf("[SUCCESS] RS. %.2f debited. Remaining balance: RS. %.2f\n", withdrawAmount, balance);
    }
}
