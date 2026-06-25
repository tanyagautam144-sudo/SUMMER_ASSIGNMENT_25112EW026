//Write a program to Find longest word.

#include<stdio.h>
#include<String.h>
int main()
{

    int i  , count , len , maxlength ;
    char  str[1000] , longestword ;

    printf("input a sentence in str ");
    fgets(str , sizeof(str) , stdin);

for(i=0 ; str[i] !=0 ;  i++)
    {   
        if(str[i] == ' ') {
            count++ ;
        }
}
len = strlen(str);
if(len>maxlength)
{
maxlength = len ;
longestword = str [i];
}

printf("longest word is %c",longestword);

return 0;

}