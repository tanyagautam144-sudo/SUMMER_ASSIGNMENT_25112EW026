//Write a program to Multiply matrices
#include<stdio.h>
int main()
{
int r1, c1 , r2 , c2 , a[100][100] , b[100][100] , product[100][100] , i , j , p , q  , k;        //declaration of variables

printf("enter number of rows for first matrix:");         
scanf("%d", &r1);
printf("enter number of columns for first matrix :");
scanf("%d", &c1);
printf("enter number of rows for second matrix:");
scanf("%d", &r2);
printf("enter number of columns for second matrix:");
scanf("%d",&c2);
 if(c1!=r2)
        { 
            printf("multiplication not possible");
            
        } 
else {
printf("enter elements in first matrix : \n");        
for(i = 0 ; i<r1; ++i)           //loop controls rows outer loop
{
    for( j = 0 ; j<c1 ; ++j)   //inner loop controls columns
    {
        printf("enter elements a%d%d " , i+1 , j+1);  //here we are using i+1 because array indexing starts from 0 but to show position of each element ina more conveninent way that is a11,a12 etc
       scanf("%d", &a[i][j]);
    }
}
printf("Enter elements of 2nd matrix:\n");
    for (p = 0 ; p < r2 ; ++p)
        for (q = 0 ; q < c2 ; ++q) 
        {
            printf("Enter element b%d%d: ", p + 1, q + 1);
            scanf("%d", &b[p][q]);
        }
       
     {
        for (i = 0; i < r1; i++)
    {
        for (q = 0; q < c2; q++)
        {
            product[i][j] = 0;

            for (k = 0; k < c1; k++)
            {
                product[i][q] += a[i][k] * b[k][q];
            }
        }
    }
}

         printf("product of two matrices:\n");
  {
    for (i = 0; i < r1; ++i)      //moves through rows
    {
        for (q = 0; q < c2; ++q)  //moves through column
        {
            printf("%d   ", product[i][q]);
        }
        printf("\n");
    }

    }
}
    return 0;
}