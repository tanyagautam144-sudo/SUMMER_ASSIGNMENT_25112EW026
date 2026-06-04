// to find nth term of a fibonacci series

#include<stdio.h>

int Fib( int n)           // recursion to declare F(n) as the nth term of a fibonacci series
  {
      if ( n<=1)
      return n ;
      return Fib(n - 1) + Fib(n - 2) ;    // mathematical forumula for finding nth term of series
  }
  
  int main()
  {
  int n;                               // to take the input from the user
 { printf("enter a number :");
  scanf("%d", &n);
 
  
  printf("the nth term of a fibonacci series is : %d" , Fib(n));
  
  return 0;}
  
  }