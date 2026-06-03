// to check whether the number is prime
#include<stdio.h>
int main()
{
  int n , i , prime ;
  printf("enter a number :");
  scanf("%d", &n);
  for(i = 2 ; i<n ; i++ )
  {
if ( n % i == 0)
{
    
     printf ("number is not prime"); 
    }

     else {
      printf("number is prime");
     }
  }
  return 0;
}