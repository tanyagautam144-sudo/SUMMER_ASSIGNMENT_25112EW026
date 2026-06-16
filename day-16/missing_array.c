//Write a program to Find missing number in array
#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

                          // Sum of first n natural numbers
    int totalSum = n * (n + 1) / 2;

                                   // Sum of array elements
    int arraySum = 0;
    for(i = 0; i < n - 1; i++)
    {
        arraySum += arr[i];
    }

                                      // Missing number
    int missing = totalSum - arraySum;

    printf("Missing number is: %d\n", missing);

    return 0;
}