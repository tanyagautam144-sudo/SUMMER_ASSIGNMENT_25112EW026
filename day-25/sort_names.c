//Write a program to Sort names alphabetically 
#include<stdio.h>
#include<string.h>
int main()
{
    int n , i ,j ;
    char  names[100][100], temp[100];       //this is a 2-dimensional character array used to store multiple names.
    // Input the number of names
    printf("Enter the number of names: ");
    scanf("%d", &n);

    // Input the names
    printf("Enter the names:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }
    // Sort the names alphabetically using bubble sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            // Compare two names
            if(strcmp(names[i], names[j]) > 0)    //greater than zero as First string comes after second string
            {
                // Swap the names
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    // Display the sorted names
    printf("\nNames in alphabetical order:\n");

    for(i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}