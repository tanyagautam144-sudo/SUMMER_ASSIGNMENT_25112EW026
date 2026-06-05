// program to print armstrong numbers in a given range 
#include<stdio.h>
#include<math.h>

int main()
{
    int start, end, i, r , count, arm, var ;   // start and end for range numbers
    printf("Enter the range start : ");
    scanf("%d ", &start);
    printf("Enter the range end : ");
    scanf("%d ", &end);

    printf("Armstrong numbers in the range %d to %d are:\n", start, end); 

    for(i = start; i <= end; i++) // i is used to create loop to check for each number in the range if is it armstrong or not

    {
        var = i;       // var is used to store the value of i for later use in calculations

        arm = 0;
        count = 0;     // count is used to store the number of digits in i for later use in power calculations
        while(var != 0)  // while is used to count the number of digits in i by dividing it by 10 until it becomes zero
        {
            var = var / 10;
            count++;
        }
        var = i;
        while(var != 0)
        {
            r = var % 10;
            arm = arm + pow(r, count);  // here pow is the power function from math.h library which is used to calculate the power of r to the no of digits and add it to arm
            var = var / 10;
        }
        if(arm == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}