//write a program to generate fibonacci series
 #include<stdio.h>
 int main()
 {
  int n , i , t1 = 0 , t2 = 1 , nextterm;     // fibbonacci starts from 0
  printf("enter a number n :");               // to generate fibonacci series till n terms
  scanf("%d" , &n);
  printf("fibonacci series :");               // to print the fibonacci series
   for(i = 1 ; i<=n ; i++)                    // for creating loop to form fibonacci series
 { 
  printf("%d\n" , t1);                         //to print the first term of series
  nextterm = t1 + t2 ;        //as we know that the next term is the sum of previous two numbers in series
   t1 = t2 ;                   //to update the value of t1 and t2 for next term everytime
  t2 = nextterm;                 
 }
 return 0;
   
   
 }