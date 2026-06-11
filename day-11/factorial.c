//Write a program to Write function to find factorial.
#include<stdio.h>
void factorial()
{
    int n ;
    int i ;
    int fact = 1;
    
    printf("enter a number :");
    scanf("%d",&n);

    if (n < 0) 
   
    {
    printf("error : n should be a positive integer\n");  
       
   }

   else if (n == 0) 
  
   {
    printf("factorial of %d is %d\n", n , fact);
   

   }

   else{
    for(i = 1 ; i<=n ; i++) 
    
     {
      fact*= i ;
     
     
     
    }
     printf("factorial of %d is %d\n" , n , fact);
}
    
}
int main()
    {
        factorial();
        return 0;
    }


