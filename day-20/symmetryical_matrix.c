//Write a program to Check symmetric matrix
#include<stdio.h>
int main()
{
int row , column , a[100][100], i , j ;      //declaration of variables
int flag  = 1;
printf("enter number of rows :");         
scanf("%d", &row);
printf("enter number of columns :");
scanf("%d", &column);

if (row != column)
    {
        printf("Matrix is not symmetric");
        return 0;
    }


printf("enter elements in first matrix : \n");        
for(i = 0 ; i<row ; ++i)           //loop controls rows outer loop
{
    for( j = 0 ; j<column ; ++j)   //inner loop controls columns
    {
        printf("enter elements a%d%d " , i+1 , j+1);  //here we are using i+1 because array indexing starts from 0 but to show position of each element ina more conveninent way that is a11,a12 etc
       scanf("%d", &a[i][j]);
    }
}
  {
for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++) 
        {
    if (a[i][j] != a[j][i]) {
     flag = 0 ;   //This break exits only the inner loop (j loop).
     break ;
    }
    }

    if (flag == 0)     //it is used to stop the outer loop once we already know the matrix is not symmetric.
    break ;
}
  }
if (flag == 1) 
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");

 
return 0;
        }