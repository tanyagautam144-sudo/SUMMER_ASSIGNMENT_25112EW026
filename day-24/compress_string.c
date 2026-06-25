//Write a program to Compress a string
#include <stdio.h>

int main()
{
    char str[100];
    int i, count;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 1;  // Initialize count for the current character

        while(str[i] == str[i + 1])        // Count consecutive occurrences of the same character
        {
            count++;            // Increase count
            i++;       //moving to next character
        }

        printf("%c%d", str[i], count);
    }

    return 0;
}