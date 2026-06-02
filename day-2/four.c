// to check whether a number is palindrome or not
 #include<stdio.h>
 int main()
 {
  int n , reverse , palindrome ;        // palindrome is a number  that reads the same as backwards

  printf("enter a number :");
  scanf("%d", &n);
  palindrome = n ;
  reverse = 0 ;
  while ( n != 0)
  { reverse = reverse*10 + n % 10 ;
    n = n / 10 ;
  }
  if ( palindrome == reverse)            // palindrome number is equal to reverse number
  { printf("the number is palindrome\n");
  }
  else 
  { printf("the number is not palindrome\n");
  }
}