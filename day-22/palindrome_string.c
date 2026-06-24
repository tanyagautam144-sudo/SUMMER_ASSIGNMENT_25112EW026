//Write a program to Check palindrome string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100] , revstr[100];
    int i, length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for(i = length - 1; i >= 0; i--) {
    revstr[length - 1 - i] = str[i];
     }
     revstr[length] = '\0';
    if(strcmp(str, revstr) == 0)
    {
        printf("string is a palindrome ");

    }
    else{
        printf("string is not palindrome");
    }

    return 0;
}