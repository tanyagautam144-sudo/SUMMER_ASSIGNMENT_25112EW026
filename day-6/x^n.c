//to find x^n without using pow()
#include<stdio.h>
int main()
{
    int x , n , i , num = 1;
    printf("enter a number x:");
    scanf("%d" , &x);

printf("enter power :");
scanf("%d",&n);

for(i=1 ; i<=n ; i++ )
{
    num = num*x ;
}

printf("x^n is : %d",num);
return 0;
}