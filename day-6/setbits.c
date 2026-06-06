// to count set bits in a number 

// to find set bits first of all we have to convert decimal into binary and then count number of 1(true value) in that binary number

#include<stdio.h>
int main()
{
    int n , r , setbits , count= 0 ;
    long long b = 0,base= 1 ;

    printf("enter a number:");
    scanf("%d",&n);
while(n>0)
{ 
    r = n % 2 ;
    b = b + (r*base);
    base = base*10 ;
    n = n/2;

}
while(b != 0)
{
     setbits = b % 10 ;

    if(setbits == 1)
    {
       
        count ++ ;
        }
        b = b/10;

} 
 printf("set bits in a number are: %d" ,count ) ;
    return 0;
}