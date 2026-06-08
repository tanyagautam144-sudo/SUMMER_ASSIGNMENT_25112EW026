//program to print num triangle
#include<stdio.h>
int main()
{
    int i , j , num ;       //declaring variables

    printf("enter a number :");
    scanf("%d", &num);

    for(i = 1 ; i <=num ; i++)     //runs for each row
    {
        for(j = 1 ; j<=i ; j++)         //prints the row i times
    {
        {
            printf("%d",j);
        }
            
              printf("\n");     //next line
        
    }
 return 0;
    
}