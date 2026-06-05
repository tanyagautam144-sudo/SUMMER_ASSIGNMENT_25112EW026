// to check if a number is perfect number 
#include<stdio.h>
int main()
{
    int n , sum = 0 , i ;    //n is the number to be checked for being perfect number , sum is used to store the sum of the divisors , i is used to create loop to check for divisors 
    printf("enter a number :");
    scanf("%d",&n);
    for(i = 1 ; i<=n/2 ; i++)  //loop to check for the divisors of n 
    {
        if(n % i == 0)
        { 
            sum = sum + i ;    //if i is a divisor then add to sum

        }
    }
    if ( sum == n && n>0)        // a pefect number is a number which is equal to the sum of its perfect divisors
    {
        printf("%d is a perfect number\n",n);            

    }
    else {
        printf("%d is not a perfect number\n",n);
    }
    return 0;
}