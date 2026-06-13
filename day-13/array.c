//Write a program to Input and display array
#include <stdio.h>

int main() {
    int n, i;   // Variable to store number of elements
    printf("Enter size of array: ");  //take size of array from user
    scanf("%d", &n);

    int arr[n];      // Declare array of size n
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}