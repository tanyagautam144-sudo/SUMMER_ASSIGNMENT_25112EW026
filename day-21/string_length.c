//Write a program to Find string length without strlen()
#include<stdio.h>
#include<string.h>

int main()
{
     int i = 0;
     char string[100] ;     //declaring variables
     printf("enter a word or sentence :");
     scanf("%s",&string);

     while(string[i] !=  '\0')       //loop runs till null character '\0'  of a string is found 
     {
        i++ ;
     }
printf("length of string is %d" , i);

return 0;

}