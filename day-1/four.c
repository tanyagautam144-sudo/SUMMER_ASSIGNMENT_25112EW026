//count digits in a number
#include<stdio.h>
int main()
{
  int n , count = 0 ;
  printf("enter a number n :");
  scanf("%d" , &n);
  while(n != 0)
  {
    n /= 10;           //removing the last digit of n
    count++;
  }
  printf("number of digits in the entered number is %d\n" , count);
  return 0;  
}