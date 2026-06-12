//pallindrome using function
#include<stdio.h>
void palindrome()
{
    int  n ;
    printf("enter a number:");
    scanf("%d",&n);
    int reverse = 0 ;
    int original = n;
    while(n != 0)
    {
        reverse = reverse*10 + n % 10 ;
        n = n / 10 ;
    }
    if (reverse == original )
    {
        printf("%d is palindriome",original);
    }
    else 
    {
    printf("%d is not a palindrome number",original);
    }


}

int main()
{
palindrome();

return 0;
}