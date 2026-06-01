// to calculate sum of first N numbers
#include<stdio.h>
int main()
{
  int n , i , sum = 0 ;             // n should be a positive integer
  printf("enter a number n : ");
  scanf("%d" , &n);

  
  for(i = 1 ; i<=n ; i++)
  { sum += i ;
  }
  printf("sum of first %d natural numbers = %d\n" , n , sum);
  return 0;
}