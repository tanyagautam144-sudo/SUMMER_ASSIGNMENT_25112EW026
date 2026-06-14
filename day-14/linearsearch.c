//Write a program to Linear search
#include<stdio.h>
int linearsearch(int arr[] , int key , int n)       //function to search an element in the array
{
    for ( int i = 0 ; i<n ; i++)    //going through all the elements of the array one by one
{
    if(arr[i]==key)            //checking if the key matches the current elememt
    {
        return i ;           //return index if element found
    }
}
return -1;        //return -1 if not found
}

int main()
    {
      int arr[120] , n , key ;
    printf("enter size of array:");       //input size of array
    scanf("%d",&n);

    printf("enter elements:/n");    //input array elements
   for(int i = 0 ; i<n ; i++)   
   {
    scanf("%d", &arr[i]);
    
   }
   printf("enter key to search:");   //input elements to be searched
   scanf("%d",&key);

   int result = linearsearch(arr,key,n) ;        //calling linearsearch function
   if (result !=-1)
   {
    printf("element found at index %d",result);
   }
else 
{
    printf("element not found");
}
return 0;
       
    }
