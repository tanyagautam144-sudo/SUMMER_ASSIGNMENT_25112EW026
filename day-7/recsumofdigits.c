//recursive sum of digits
#include<stdio.h>
int sumdigits(int n)    //this is a recursive sum of digits of a given number

{
    
if ( n == 0 )    //n == 0 is the base case which means when to stop calling itself 
 { return 0 ;    //to terminate
 }
 else{
    return(n%10) + sumdigits (n/10) ;   // extracting last digits and adding of the digits
 }

}
int main()
{
    int num ;
    printf("enter a number:");
    scanf("%d", &num);
    printf("sum of digits : %d", sumdigits(num));
    return 0;
}