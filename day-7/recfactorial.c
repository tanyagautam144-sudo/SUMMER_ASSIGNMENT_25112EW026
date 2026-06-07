// program to recursive factorial
#include <stdio.h>
int factorial(int n)  // recursive function is used to find factorial 
  { if (n == 1, n == 0)   // factorial of 0 and 1 is 1
   {
      return 1;      //to terminate 
   }
   else
   {
      return (n * factorial(n - 1));   // recursive call  as we know n! = n(n-1)!
   }
}
int main()
{
   int num ;        // num to store the input

   printf("enter the number\n :");   
   scanf("%d", &num);
   printf("%d is the factorial of %d", factorial(num), num);
   return 0;
}
