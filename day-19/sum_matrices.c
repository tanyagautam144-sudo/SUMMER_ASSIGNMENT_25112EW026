//sum of matrices
#include<stdio.h>
int main()
{
int row , column , a[100][100] , b[100][100] , sum [100][100] , i , j ;        //declaration of variables

printf("enter number of rows :");         
scanf("%d", &row);
printf("enter number of columns :");
scanf("%d", &column);

printf("enter elements in first matrix : \n");        
for(i = 0 ; i<row ; ++i)           //loop controls rows outer loop
{
    for( j = 0 ; j<column ; ++j)   //inner loop controls columns
    {
        printf("enter elements a%d%d " , i+1 , j+1);  //here we are using i+1 because array indexing starts from 0 but to show position of each element ina more conveninent way that is a11,a12 etc
       scanf("%d", &a[i][j]);
    }
}
printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < row; ++i)
        for (j = 0; j < column; ++j) 
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

        for (i = 0; i < row; i++)   //row traversal 

        for (j = 0; j < column; ++j)    // column traversal
            sum[i][j] = a[i][j] + b[i][j];

    // Output result
    printf("Sum of two matrices:\n");
  
    for (i = 0; i < row; ++i)      //moves through rows
    {
        for (j = 0; j < column; ++j)  //moves through column
        {
            printf("%d   ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;

}