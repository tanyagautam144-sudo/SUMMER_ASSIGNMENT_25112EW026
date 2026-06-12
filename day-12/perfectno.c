//Write a program to Write function for perfect number.
#include<stdio.h>
void perfectno()
{
    int n ;
    printf("enter a number :");
    scanf("%d",&n);
    int sum = 0;
    int i;
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
}

int main()
{
    perfectno();
    return 0;
}