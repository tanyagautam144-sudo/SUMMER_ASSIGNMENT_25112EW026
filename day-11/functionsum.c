//Write a program to Write function to find sum of two numbers
#include<stdio.h>
void sum(){
int x ;
printf("enter x:");
scanf("%d",&x);
int y ;
printf("enter y :");
scanf("%d",&y);
int sum = x + y ;
printf("The sum of x + y is: %d", sum);
}
int main()
{
    sum();
    return 0;
}