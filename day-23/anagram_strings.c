//Write a program to Check anagram strings.
#include<stdio.h>
#include<string.h>
int main()
{
    int i , j , len1 , len2 ;
    char str1[1000] , str2[1000] ;
    int Anagram = 1 ;

    printf("enter in str1:");
    fgets(str1 , sizeof(str1) , stdin);

    printf("enter in str2:");
    fgets(str2 , sizeof(str2) , stdin);

                             // Find lengths of both strings
    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 != len2)
    {
        Anagram = 0;
    }
    


//comparing frquencies of character
else{
for(i = 0 ; i<=len1 ; i++)
{
    int count1 = 0, count2 = 0;

            // Count frequency of str1[i] in first string
            for(j = 0; j < len1; j++)
            {
                if(str1[i] == str1[j])
                {
                    count1++;
                }


// Count frequency of str1[i] in second string
            for(j = 0; j < len2; j++)
            {
                if(str1[i] == str2[j])
                {
                    count2++;
                }
            }

            if(count1 != count2)
            {
                Anagram = 0;
                break ;
            }
        }
    }

            if(Anagram = 1)
            {
                printf("strings are anagram");

            }
        else{
            printf("strings are not anagram");
        }

    }

return 0;
}
