// to convert decimal number into binary number
#include<stdio.h>

int main()
{
    int n , r ;
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
printf("binary number : %lld",b);
return 0 ;
}