//to convert a binary number to dcimal number
#include<stdio.h>
int main()
{
    int n , d = 0 ,r , place = 1 ;
    printf("enter a number :");
    scanf("%d",&n);
  while (n>0)
  {
    r = n % 10 ;
    d = d + r*place ;
    place = place*2 ;
    n = n/10 ;

  }
  printf("decimal number is : %d" ,d);
  return 0;
}