//Write a program to Frequency of an element.
#include<stdio.h>
int main()
{
    int arr[100] , n , key ;
    int frequency = 0 ;

    printf("enter size of array:");
    scanf("%d",&n);
   printf("enter elements:/n");
    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter element to find frequency :");
    scanf("%d",&key);

    for(int i = 0 ; i<n ; i++ )
    {
        if((arr[i]) == key )
        {
            frequency ++ ;
        }
    }
        printf("frequency of %d is %d ", key , frequency);
    
    return 0;
}