// to recursive reverse a number
#include<stdio.h>
int rev= 0 ;      //here int rev is the global variable for the purpose of storing value of reversed number
int reverse(int n)  //this is a recursive function to reverse a given number
 {
    if ( n == 0)      //n == 0 is the base case which means when to stop calling itself   
    {                 //when n = 0 all the digits have been processed and added to added to rev
        return rev;  // return the reversed number
    }
    else
    { 
        
        rev = rev * 10 + n % 10 ;    //extracting he last digit from n and adding it to the reverse digit (rev*10)
        return reverse( n / 10);       //calling the function again 
    }
 }
 int main()
 {
    int num ;
    printf("enter a number:");
    scanf("%d",&num);
    printf("reverse of %d is %d:", num , reverse(num));
    return 0;
 }