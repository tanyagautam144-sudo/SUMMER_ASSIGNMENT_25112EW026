// to print star pyramid
#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("enter number of rows:");      
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)        
    {
        for (j = 1; j <= rows - i ; j++) //first inner loop decides spaces which prints star in centre
             {
                printf(" ");
            }
             
           
            for(j = 1 ; j<=2*i-1 ; j++)           //prints star accordingly 
           
           {
            printf("*");
           }
        
        printf("\n");
    }


    return 0;
}