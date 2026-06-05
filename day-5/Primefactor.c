//to find the largest prime factor of a number
#include<stdio.h>
int main()
{
    int n , i , j , prime;
    printf("enter a number n :");
    scanf("%d" , &n);
    printf("the prime factors of %d\n are : " , n);
    for(i = 2 ; i <= n ; i++)        // if a number is a factor then remainder of it dividing another remainder equals to zero
    {
        while(n % i == 0)   // to check if i is a factor of n
        {
            printf("%d\n " , i);   // to print the factor of n
            n = n / i ;          // to remove the factor from n
        }
        for(j = 2 ; j <= i / 2 ; j++)   // to check if i is a prime number
        {
            if(i % j == 0)   // if i is divisible by any number other than 1 and itself then it is not a prime number as we know prime numbers are only divisible by 1 and itself
            {
                break;
            }
        }
        if(j > i / 2)   // if i is a prime number
        {
            prime = i ;   // to store the largest prime factor
        }

         
    }
    printf("the largest prime factor is : %d\n" , prime);
    return 0 ;
}