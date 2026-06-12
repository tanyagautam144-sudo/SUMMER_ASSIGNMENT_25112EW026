//armstrong number
#include<stdio.h>
#include<math.h>
void armstrong()
{
    int n ;
    printf("enter a number:");
    scanf("%d",&n);
    int count = 0;
    int temp = n ;
    int original = n;
    int arm = 0;
    int  r;
    
    while(temp!=0)
    {
          // while is used to count the number of digits in i by dividing it by 10 until it becomes zero
 {
 temp = temp/ 10 ;
   count++;     // count is used to store the number of digits in i for later use in power calculations
}
temp == original ;
while(temp>0)
{
  r = temp % 10 ;
  arm = arm + pow(r, count);     // here pow is the power function from math.h library which is used to calculate the power of r to the no of digits and add it to arm
  temp = temp / 10 ; }
 if (arm == original)
 { printf("%d is an armstrong number: ", original);

 }
else {
  printf("%d is not an armstrong number:" , original);
}
    }
}

int main()
{
    armstrong();
    return 0;
}