//Write a program to Create voting eligibility system.
#include<stdio.h>
int main()
{
int age ;

printf("enter your age :");
scanf("%d",&age);
if(age<0){
    printf("invalid age");
}
else if(age>=18)
{
printf("eligible for voting");
}

else {
    printf("not eligible for voting");
}

return 0 ;
}
