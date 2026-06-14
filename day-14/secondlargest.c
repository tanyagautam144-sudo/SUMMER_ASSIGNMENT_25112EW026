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
    int largest = arr[0];    // Assume first element is both largest and second largest initially
    int secondlargest = arr[0];
    for(int i = 1; i < n; i++)    //going through the array
     {
        if(arr[i] > largest)   //if current element is greater than largest
         {
            secondlargest = largest; //old largest number becomes second largest
            largest = arr[i]; //update the largest  number
        }
        else if(arr[i] > secondlargest && arr[i] != largest)    
         {
            secondlargest = arr[i];
        }
    }

    printf("Second largest element is %d", secondlargest);

    return 0;
}

