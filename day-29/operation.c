// Menu-Driven Array Operations System

#include <stdio.h>

int arr[100], n;

// Function to create an array
void createArray()
{
    int i;

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array Created Successfully!\n");
}

// Function to display the array
void displayArray()
{
    int i;

    printf("\nArray Elements are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

// Function to find the largest element
void largestElement()
{
    int i, largest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("\nLargest Element = %d\n", largest);
}

// Function to find the smallest element
void smallestElement()
{
    int i, smallest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("\nSmallest Element = %d\n", smallest);
}

// Function to calculate sum of elements
void sumArray()
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("\nSum of Elements = %d\n", sum);
}

int main()
{
    int choice;

    do
    {
        printf("\n====== ARRAY OPERATIONS SYSTEM ======\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Find Largest Element\n");
        printf("4. Find Smallest Element\n");
        printf("5. Find Sum of Elements\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                createArray();
                break;

            case 2:
                displayArray();
                break;

            case 3:
                largestElement();
                break;

            case 4:
                smallestElement();
                break;

            case 5:
                sumArray();
                break;

            case 6:
                printf("\nThank You for Using the Array Operations System!\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while(choice != 6);

    return 0;
}