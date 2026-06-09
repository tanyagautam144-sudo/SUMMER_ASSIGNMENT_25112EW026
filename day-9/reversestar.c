//to print reverse star pattern
#include<stdio.h>
int main()
{
    int i , j , rows ;
     printf("enter number of rows:");
     scanf("%d",&rows);

     for(i = rows; i>=1  ; i-- )
     {
        for(j = i ; j>=1 ; j--){
            printf("*");
            
        }
        printf("\n");
     }
     return 0;
    }