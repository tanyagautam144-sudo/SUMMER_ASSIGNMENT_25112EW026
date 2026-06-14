//Write a program to Second largest element
#include<stdio.h>
int main()
{
    int arr[100] , n ;

    printf("enter size of array:");
    scanf("%d",&n);

    printf("enter elements:");
    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int secondlargest = arr[0];
    for(int i = 1; i < n; i++)
     {
        if(arr[i] > largest)
         {
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i] != largest)
         {
            secondlargest = arr[i];
        }
    }

    printf("Second largest element is %d", secondlargest);

    return 0;
}

