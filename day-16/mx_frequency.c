//Write a program to Find maximum frequency element

#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int maxfrequency = 0, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

                                         // Find frequency of each element
    for(i = 0; i < n; i++)
    {
        int count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

                                             // Update maximum frequency
        if(count > maxfrequency)
        {
            maxfrequency = count;
            element = arr[i];
        }
    }

    printf("Element with maximum frequency = %d\n", element);
    printf("Frequency = %d\n", maxfrequency);

    return 0;
}