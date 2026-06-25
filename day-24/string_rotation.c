//Write a program to Check string rotation
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100] , str2[100] , temp[300] ;

    printf("enter in str1 :");
    fgets(str1 , sizeof(str1) , stdin);

    printf("enter in str2");
    fgets(str2 , sizeof(str2), stdin);

    // Check if the lengths of both strings are equal
    if(strlen(str1) != strlen(str2))
    {
        printf("Strings are not rotations of each other.");
        return 0;
    }
        
    // Copy the first string into temp 
    strcpy(temp, str1);

    // Concatenate the first string with itself becuase because because every possible rotation of a string will appear as a substring in str1 + str1.
    strcat(temp, str1);

    // Check whether str2 exists in the concatenated string 
    if(strstr(temp, str2) != NULL)

      {
        printf("Strings are rotations of each other.");
    }
    else
    {
        printf("Strings are not rotations of each other.");
    }

    return 0;
}