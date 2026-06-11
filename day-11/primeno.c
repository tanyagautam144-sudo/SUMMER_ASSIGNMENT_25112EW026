//Write a program to Write function to check prime.
#include<stdio.h>
void prime() {
int x ;
int i ;
printf("enter number x :");
scanf("%d",&x);
for(i = 2 ; i <=x ; i++)
break;
if(x % i != 0)
printf("prime");
else
printf("not prime");
}
int main()
{
    prime ();
    return 0;
}
