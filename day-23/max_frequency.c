//Write a program to Find maximum occurring character.
#include<Stdio.h>
#include<string.h>
int main()
{
    int i , j , count , maxcount = 0 ; 
    char str[100] , maxch ;

    printf("enter a word or a sentence:");
    fgets(str , sizeof(str) , stdin);

    for(i = 0 ; str[i] != '\0' ; i++)
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
    
    

     if(count > maxcount)
        {
            maxcount = count;
            maxch = str[i];
        }
    }
        printf("Maximum occurring character is '%c'\n", maxch);
    printf("Frequency = %d", maxcount);

    return 0;

    }
