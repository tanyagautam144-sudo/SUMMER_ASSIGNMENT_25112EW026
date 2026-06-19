//Write a program to Find diagonal sum.
#include<stdio.h>
int main()
{
    int r , c , i , j , a[100][100] , sum = 0 ;
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

for(i=0 ; i<r ; i++)
    { for(j = 0 ; j<c ; j++)  {
        if(i==j) 
{
    sum += a[i][j] ;
} 
}
}
printf("sum of diagonals is %d " , sum );
return 0;
}