// to find factorial of a number n
#include<stdio.h>
int main()
{
  int n , i , fact = 1 ;             
  printf("enter a number n : ");
  scanf("%d" , &n);
   if (n < 0) {
    printf("error : n should be a positive integer\n");       
   }

   else if (n == 0) {
    printf("fact of 0 is 1\n");
   }

   else{
    for(i = 1 ; i<=n ; i++) {
      fact*= i ;

    }
    printf("fact of first %d natural numbers = %d\n" , n , fact);
  
   }
  
  
  return 0 ;
  
}