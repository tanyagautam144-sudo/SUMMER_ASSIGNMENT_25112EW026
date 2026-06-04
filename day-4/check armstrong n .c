//to check if a number is armstrong
#include<stdio.h>
#include<math.h>      //used for mathematical operations like power
int main()
{
  // armstrong number 153 = 1*1*1 + 5*5*5 + 3*3*3

  int n , originaln , r , count = 0 , var , arm = 0 ;  // originaln is used to store the original value of n for later comparison , r is used to store the last digit of n , count is used to store number of digits in n , var is used to store the value of n for later use and arm is used to store the sum of the power of digits of each digit in n

  (double) arm ;   //to avoid the loss of precise value and decimal points in case of large numbers 

  
printf("enter a number :");
scanf("%d" , &n);


originaln = n;
var = n ;           
 while(var!= 0)      // while is used to count the number of digits in i by dividing it by 10 until it becomes zero
 {
   var = var/ 10 ;
   count++;     // count is used to store the number of digits in i for later use in power calculations
}
var = n ;
n = originaln ;
while(var>0)
{
  r = var % 10 ;
  arm = arm + pow(r, count);     // here pow is the power function from math.h library which is used to calculate the power of r to the no of digits and add it to arm
  var = var / 10 ; }
 if ((int)arm == originaln)
 { printf("%d is an armstrong number: ", originaln);

 }
else {
  printf("%d is not an armstrong number:" , originaln);
}
return 0;
}