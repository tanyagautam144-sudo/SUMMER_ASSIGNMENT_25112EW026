//to print a character triangle
#include<stdio.h>
int main()
{
    int i , j  , rows ; //declaring variables
     
    printf("enter number of rows:");
    scanf("%d",&rows);
 for(i = 1 ; i<=rows ; i++ )           //runs for each row
 {        
    char ch = 'A';
    for(j = 1; j<=i ; j++)       //prints the row i times
    {
    {
        
        printf("%c",ch);
        ch++ ;

    }
    printf("\n");       //next line
 }
return 0;
}