// recursive fibonacci
#include<stdio.h>
int fibonacci(int n)   //recursive funcation to find fibonacci series
{
    if(n == 0 )      //n == 0 is the base case which means when to stop calling itself 
    {
        return 0; 
    }
    {
    if(n == 1)
    return 1 ;
     return fibonacci(n-1) + fibonacci(n-2);    //applying the basic formula of fibonacci
    }
}

int main()
{
    int  n, i ;
    printf("enter a n:");
    scanf("%d" ,&n);
     printf("fibonacci series is :" );

     for(i = 0 ; i<n ; i++)
     {
        printf("%d\n", fibonacci(i));

     }
     return 0 ;
}