//Write a program to Find longest word.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    char longestword[100];
    char word[100];

    int i, j = 0;
    int maxlength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            word[j++] = str[i];
        }
        else
        {
            word[j] = '\0';

            if(strlen(word) > maxlength)
            {
                maxlength = strlen(word);
                strcpy(longestword, word);
            }

            j = 0;

            if(str[i] == '\0' || str[i] == '\n')
                break;
        }
    }

    printf("Longest word is: %s", longestword);

    return 0;
}