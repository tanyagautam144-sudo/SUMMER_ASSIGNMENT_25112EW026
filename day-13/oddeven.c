//Write a program to Count even and odd elements
#include <stdio.h>

int main() {
    int n, i;  // Variable to store number of elements

    printf("Enter the number of elements: ");   //take size of array
    scanf("%d", &n);

    int arr[n];
    int odd = 0 , even = 0 ;   // Variables to count even and odd numbers

    printf("Enter %d elements:\n", n);  // Take array elements as input
    for(i = 0; i < n; i++)    
    {
        scanf("%d", &arr[i]);       // Check whether the element is even or odd
    

    
        if (arr[i]%2 == 0)
        even++;   // Increase even count

    else
        odd ++;    // Increase odd count
    }
    
    printf("no of odd number = %d\n", odd);
    printf("no of even number = %d\n", even);

    return 0;
}