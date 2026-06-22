//Write a program to Find row-wise sum.
#include<stdio.h>
int main()
{
    int r , c , i , j , a[100][100] , sum = 0; //cn = column number
    printf("enter number of rows:");
    scanf("%d",&r);
    printf("enter number of columns:");
    scanf("%d",&c);

   printf("enter elements in first matrix : \n");
    for(i=0 ; i<r ; ++i)
    {
        for(j=0 ; j<c ; ++j)
        {
        printf("enter elements a%d%d", i+1 , j+1);
         scanf("%d", &a[i][j]);
    }
}
for(i=0 ; i < r ; i++){
for(j=0 ; j<c ; j++)
{
    
 sum += a[j][i] ;
 
}
 printf("sum of column is %d\n" , sum);
    }

 return 0;

}