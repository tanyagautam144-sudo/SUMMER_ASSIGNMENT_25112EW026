// Bank Account Management System using Functions

#include <stdio.h>

// Structure to store account details
struct Bank
{
    int accountNumber;
    char name[50];
    float balance;
};

// Function to create account
void createAccount(struct Bank *b)
{
    printf("\nEnter Account Number: ");
    scanf("%d", &b->accountNumber);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", b->name);

    printf("Enter Initial Balance: ");
    scanf("%f", &b->balance);

    printf("\nAccount Created Successfully!\n");
}

// Function to deposit money
void deposit(struct Bank *b)
{
    float amount;

    printf("\nEnter Amount to Deposit: ");
    scanf("%f", &amount);

    if(amount > 0)
    {
        b->balance = b->balance + amount;
        printf("Amount Deposited Successfully!\n");
        printf("Current Balance = %.2f\n", b->balance);
    }
    else
    {
        printf("Invalid Amount!\n");
    }
}

// Function to withdraw money
void withdraw(struct Bank *b)
{
    float amount;

    printf("\nEnter Amount to Withdraw: ");
    scanf("%f", &amount);

    if(amount <= b->balance)
    {
        b->balance = b->balance - amount;
        printf("Withdrawal Successful!\n");
        printf("Remaining Balance = %.2f\n", b->balance);
    }
    else
    {
        printf("Insufficient Balance!\n");
    }
}

// Function to display account details
void display(struct Bank b)
{
    printf("\n------ Account Details ------\n");
    printf("Account Number : %d\n", b.accountNumber);
    printf("Account Holder : %s\n", b.name);
    printf("Balance         : %.2f\n", b.balance);
}

int main()
{
    struct Bank account;
    int choice;

    do
    {
        printf("\n====== BANK ACCOUNT SYSTEM ======\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                createAccount(&account);
                break;

            case 2:
                deposit(&account);
                break;

            case 3:
                withdraw(&account);
                break;

            case 4:
                display(account);
                break;

            case 5:
                printf("\nThank You for Using the Bank Account System!\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while(choice != 5);

    return 0;
}