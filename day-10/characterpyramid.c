//to print character pyramid
#include<stdio.h>
int main()
{
    int i , j , rows ;
    printf("enter number of rows:");
    scanf("%d",&rows);

    for(i = 1 ; i<=rows ;i++)       //prints the rows outer loop
    {    
        for(j = 1 ; j<=rows-i ; j++)      //prints the spaces inner loop in form of pyramids
        {
        printf(" ");
    }
    char ch = 'A' ;
    for(j = 1 ; j <=i; j++)         // prints the numbers in form of triangle
    {
        printf("%c", ch);
        ch++;
    }
    ch = ch-2;
    for(j = i-1 ; j>=1 ; j--)        //for descending order of other side of pyramid
    {
        printf("%c",ch);
        ch--;
    }
    printf("\n");
}
return 0;
}