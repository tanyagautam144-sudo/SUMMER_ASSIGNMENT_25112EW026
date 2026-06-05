// to check a number is stromg number or not 
#include<stdio.h>
int main()
{ 
    int n , i , j , fact = 1 , sum = 0 , var , count ; // n is the number to be checked , i is used to store the last digit of n , j is used in the loop to calculate the factorial of i , fact is used to store the factorial of i , sum is used to store the sum of the factorial of the digits of n , var is used to store the original value of n for later use in comparison and count is used to count the number of digits in n
    printf("enter a number n :");
  scanf("%d" , &n);
  var = n ;   // to store the original value of n for later use in comparison
  while(n > 0)
  {
    n = n / 10 ;           //removing the last digit of n
    count++;
  }

{
    while(var>0)
    {
        i = var % 10 ;     // to get the last digit of var
        fact = 1 ;
        for(int j = 1 ; j <= i ; j++)   // to calculate the factorial of the last digit
        {
            fact = fact * j ;
        }
        sum = sum + fact ;   // to add the factorial of the last digit to sum
        var = var / 10 ;     // to remove the last digit of var
    }
    printf("the sum of the factorial of the digits is : %d\n" ,sum);
    if(sum == n)   // to check if the sum of the factorial of the digits is equal to the original value of n
    {
        printf("the number is a strong number");    // a strong no is a number whose sum of the factorial of its digits is equal to the original number
    }
else
{
    printf("the number is not a strong number");
}   
 }
 return 0 ;
}