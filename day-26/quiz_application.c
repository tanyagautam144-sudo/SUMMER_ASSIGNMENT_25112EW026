//Write a program to Create quiz application.

#include<stdio.h>
int main()
{
int  age , dob , standard, fees ,phone_number ;
char name[100], subject[50] , citizenship[50] , center[100] ,option , yes , no , email[100];

printf("enter your full name:");
scanf("%s" , &name);

printf("enter your age:");
scanf("%d",&age);

printf("enter your date of birth in numerical form:");
scanf("%d",&dob);

printf("standard in which you are studying right now:");
scanf("%d",&standard);

printf("enter the subject name for quiz:");
scanf("%s",&subject);

printf("enter your citizenship:");
scanf("%s",&citizenship);

printf("enter yur phone number:");
scanf("%s",&phone_number);

printf("enter your email:");
scanf("%s",&email);

printf("enter the state in which you want to give your quiz:");
scanf("%s",&center);

printf("fees for the quiz is 200rs");

printf("registration completed! \nyou will receive your further details on given email");

return 0;
}