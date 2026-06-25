//Write a program to Find common characters in strings.
#include <stdio.h>

int main()
{
    char str[100];
    int i, j;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Compare each character with the remaining characters
    for(i = 0; str[i] != '\0'; i++)
    {
        // Skip spaces
        if(str[i] == ' ')
        {
            continue;
        }

        for(j = i + 1; str[j] != '\0'; j++)
        {
            // If duplicate character is found
            if(str[i] == str[j])
            {
                printf("%c ", str[i]);


                break;
            }
        }
    }

    return 0;
}