//Write a program to Find first repeating character.
#include<stdio.h>
#include<String.h>
int main()
{

    int i , j , count ;
    char ch , str[1000] ;

    printf("input a word or a sentence:");
    fgets(str , sizeof(str) , stdin);

     for(i=0 ; str[i] != 0 ; i++)
     {
        count = 0;

         // Compare the current character with every character in the string
        for(j = 0; str[j] != '\0'; j++)
        {
            // If the characters match, increase the count
            if(str[i] == str[j])
            {
                count++;
            }
     }
    

     // If the character appears only once
        if(count >1 )
        {
            printf("First repeating character is: %c", str[i]);

                        // End the program after finding the first non-repeating character
       return 0;
}
     }

    
     {
        printf("no repeateing word exists");
        return 0;
     }
    }