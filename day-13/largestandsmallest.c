//Write a program to Find largest and smallest element
#include <stdio.h>

int main() {
    int n, i;    // Variable to store number of element


    printf("Enter the number of elements: ");      //take size of array
    scanf("%d", &n);

    int arr[n];     

    printf("Enter %d elements:\n", n);          // take array elements as input
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Assume first element is both largest and smallest

    int largest = arr[0];
    int smallest = arr[0];

    for(i = 1; i < n; i++)  // Compare remaining elements
    {
        if(arr[i] > largest) //Update largest IF current number is greater
            largest = arr[i];

        if(arr[i] < smallest)    // Update smallest if current number is smaller
            smallest = arr[i];
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}