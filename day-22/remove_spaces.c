//Write a program to Remove spaces from string.
#include<stdio.h>
#include<string.h>
int main()
{
    int i ,j=0 ;               //Write a program to Remove spaces from string.
    char str [1000] , newstr[1000];

    printf("write a sentence:");
    fgets(str, sizeof(str), stdin);

    for(i=0 ; str[i] != '\0' ; i++)
    {                 // Copy only non-space characters to newStr
        if(str[i] = ' ')
        {
             newstr[j] = str[i];
            j++;
        }
    }
     newstr[j] = '\0';  // Add null character at the end of the new string
     printf("String after removing spaces: %s", newstr);

    return 0;

} 
