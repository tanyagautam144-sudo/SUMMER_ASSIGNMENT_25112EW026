//to print factors of a number
#include<stdio.h>
int main()
{
    int n , i ;
    printf("enter a number n :");
    scanf("%d" , &n);
    printf("the factors of %d are : " , n);
    for(i = 1 ; i <= n ; i++)        // if a number is a factor then remainder of it dividing another remainder equals to zero
    {
        if(n % i == 0)   // to check if i is a factor of n
        {
            printf("%d " , i);   // to print the factor of n
        }
    }
    return 0 ;
}