//Write a program to Count words in a sentence.
#include<stdio.h>
#include<string.h>
int main()
{
    int i , count = 1 ;
    char str [1000] ;

    printf("write a sentence:");
    fgets(str, sizeof(str), stdin);


    for(i=0 ; str[i] !=0 ;  i++)
    {   
        if(str[i] == ' ') {
            count++ ;
        }

    }

printf("number of words are %d :" , count);
return 0;
}