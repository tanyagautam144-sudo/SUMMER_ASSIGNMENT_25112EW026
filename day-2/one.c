//to find sum of a digits of a number
#include<stdio.h>
int main()
{
  int n  , remainder, sum = 0 ;
   printf("enter a number :");
   scanf("%d", &n);

   while ( n != 0)
   { remainder = n % 10 ;    //gives the last digit
    sum += remainder ;
    n = n / 10 ;


   }
   printf("sum of digits : %d\n", sum);

return 0;
}