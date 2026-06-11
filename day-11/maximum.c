//Write a program to Write function to find maximum
#include<stdio.h>
void maximum()
{
    int x ;
    printf("enter x :");
    scanf("%d",&x);
    int y ;
    printf("enter y:");
    scanf("%d",&y); 
    if (x>y)
    printf("maximum = %d",x);
     else 
     printf("maximum = %d" , y);

}
int main()
{
    maximum();
    return 0;
}
