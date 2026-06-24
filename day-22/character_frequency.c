//Write a program to Character frequency
#include<stdio.h>
#include<string.h>
int main()
{
    int i , frequency = 0 ;
    char str[1000]  , ch;
    
    printf("enter a word or a sentence :");
    fgets(str , sizeof(str) , stdin);

    printf("enter a character to find it/'s frequency :");
    scanf("%c",&ch);
    for(i = 0 ; str[i]!=  '\0' ; i++)
    {
      if(str[i] == ch)
      {
        frequency++;
      }
      
    }
    printf("frequency of the given character is %d" , frequency);
    return 0;
}