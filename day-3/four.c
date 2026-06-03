//program to find lcm of two numbers
#include<stdio.h>
int main()
{
  int a, b , i , lcm ;
  printf("enter first number :");
  scanf("%d", &a);
  printf("enter second number :");
  scanf("%d", &b);
  for(i = 1 ; i <= a * b ; i++)
  { for(i % a == 0 ; i % b == 0 ; i++)
    { 
      lcm = i ;
      break ;
    }
  }
  printf("LCM of %d and %d is %d", a, b, lcm);
  return 0;
}