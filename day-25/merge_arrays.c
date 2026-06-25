// Program to Merge Two Sorted Arrays

#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], merged[200];
    int n1, n2;
    int i, j, k;

    // Input size of first array
    printf("Enter number of elements in first sorted array: ");
    scanf("%d", &n1);

    // Input elements of first sorted array
    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter number of elements in second sorted array: ");
    scanf("%d", &n2);

    // Input elements of second sorted array
    printf("Enter elements of second sorted array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Initialize indices
    i = 0;  // For first array
    j = 0;  // For second array
    k = 0;  // For merged array

    // Compare elements from both arrays and merge them
    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
        {
            merged[k] = arr1[i];
            i++;
        }
        else
        {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array, if any
    while(i < n1)
    {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array, if any
    while(j < n2)
    {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    // Display merged sorted array
    printf("Merged Sorted Array: ");

    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}