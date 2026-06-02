//write a program to find product of digits of a number
#include<stdio.h>
int main()
{ 
  int n , remainder , product = 1 ;
  printf ("enter a number :");
  scanf("%d", &n);

  while(n != 0)
  { remainder = n % 10 ;
  product *= remainder ;
  n = n / 10 ;
  }
printf("product of digits : %d\n", product);
return 0;
} 