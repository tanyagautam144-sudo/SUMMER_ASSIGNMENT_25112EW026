//Write a program to Sort words by length.
#include<stdio.h>
#include<string.h>
int main()
{
    int n , i ,j ;
    char  words[100][100], temp[100];       //this is a 2-dimensional character array used to store multiple names.
    // Input the number of names
    printf("Enter the number of words: ");
    scanf("%d", &n);

    // Input the names
    printf("Enter the words:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
    }
    // Sort the names  using bubble sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            // Compare lengths of two words

            if(strlen(words[i])>strlen(words[j]))   
            {
                // Swap the names
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
    // Display the sorted names
    printf("\nwords in length wise order:\n");

    for(i = 0; i < n; i++)
    {
        printf("%s\n", words[i]);
    }

    return 0;
}