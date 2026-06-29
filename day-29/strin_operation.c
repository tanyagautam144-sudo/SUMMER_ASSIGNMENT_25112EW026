//Write a program to Create menu-driven string operations system.
// Menu-Driven String Operations System

#include <stdio.h>
#include <string.h>

char str[100], str2[100];

// Function to enter a string
void inputString()
{
    printf("\nEnter a String: ");
    scanf(" %[^\n]", str);

    printf("String Stored Successfully!\n");
}

// Function to find string length
void stringLength()
{
    printf("\nLength of the String = %d\n", strlen(str));
}

// Function to copy the string
void copyString()
{
    strcpy(str2, str);

    printf("\nCopied String = %s\n", str2);
}

// Function to concatenate strings
void concatenateString()
{
    printf("\nEnter Another String: ");
    scanf(" %[^\n]", str2);

    strcat(str, str2);

    printf("Concatenated String = %s\n", str);
}

// Function to reverse the string
void reverseString()
{
    int i, len;
    char rev[100];

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        rev[i] = str[len - i - 1];
    }

    rev[len] = '\0';

    printf("\nReversed String = %s\n", rev);
}

int main()
{
    int choice;

    do
    {
        printf("\n====== STRING OPERATIONS SYSTEM ======\n");
        printf("1. Enter String\n");
        printf("2. Find String Length\n");
        printf("3. Copy String\n");
        printf("4. Concatenate String\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                inputString();
                break;

            case 2:
                stringLength();
                break;

            case 3:
                copyString();
                break;

            case 4:
                concatenateString();
                break;

            case 5:
                reverseString();
                break;

            case 6:
                printf("\nThank You for Using the String Operations System!\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while(choice != 6);

    return 0;
}