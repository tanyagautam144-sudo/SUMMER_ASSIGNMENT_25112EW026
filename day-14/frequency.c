//Write a program to Frequency of an element.
#include<stdio.h>
int main()
{
    int arr[100] , n , key ;        //input the size of array
    int frequency = 0 ;   // assigning the value for frequency as zero 

    printf("enter size of array:");      //input the size of array
    scanf("%d",&n);
   printf("enter elements:/n"); //enter  the elements
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