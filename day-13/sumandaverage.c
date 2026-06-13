//Write a program to Find sum and average of array
#include <stdio.h>

int main() {
    int n, i; // Variable to store number of element
    float sum = 0, average; //storing value of sum as zero at start

    printf("Enter the number of elements: ");  //take size of array
    scanf("%d", &n);

    int arr[n]; // Declare array of size n

    printf("Enter %d numbers:\n", n); // take array elements as input
    for(i = 0; i < n; i++)    //for loop for iteration
     { 
        scanf("%d", &arr[i]);    
    }

    for(i = 0; i < n; i++)
     {
        sum = sum + arr[i];    //sum of elements in array
    }

    average = sum / n; //formula for average

    printf("Sum = %f\n", sum);
    printf("Average = %f\n", average);

    return 0;
}