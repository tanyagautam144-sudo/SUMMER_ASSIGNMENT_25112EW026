//Write a program to Transpose matrix.
#include<stdio.h>
int main()
{
    int r , c , i , j , a[100][100] , transpose[100][100];
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
for (i = 0; i < r; i++)   //row traversal 

        for (j = 0; j < c; ++j)    // column traversal
            transpose[i][j] = a[j][i] ;

    //for transpose we have to exchange elements elements in i to elements in j 
 printf("transpose of matrix:\n");
    for (i= 0 ; i<r ; ++i)
    { 
        for(j = 0 ; j<c ; ++j){
            printf("%d   ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}