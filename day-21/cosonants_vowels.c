//Write a program to Count vowels and consonants.
#include<Stdio.h>
#include<string.h>
int main()
{
    int vowels=0 , consonants=0 , i=0;
    char string[100];
    printf("enter word or a sentence:");
    scanf("%s",&string);

    while(string[i] != '\0')
    { if( 
            (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
            string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
            )
    
        {
            vowels ++  ;
        }

        else if ((string[i] >= 'a' && string[i] <= 'z') || 
                   (string[i] >= 'A' && string[i] <= 'Z')) {
            consonants++;
        }
        i++;
    }
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
    

