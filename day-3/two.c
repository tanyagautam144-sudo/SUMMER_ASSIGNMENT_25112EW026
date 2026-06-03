// to print prime numbers in a range 
#include<stdio.h>

int main(){
    int start, end, i, j, isPrime;
    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers in the range are: ");
    for(i=start; i<=end; i++){
        isPrime = 1;
        for(j=2; j<=i/2; j++){
            if(i%j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            printf("%d ", i);
        }
    }
    return 0;
}