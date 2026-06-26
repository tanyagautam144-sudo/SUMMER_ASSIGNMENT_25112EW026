//Write a program to Create number guessing game.
#include<stdio.h>
#include <stdlib.h>
#include<time.h>      //to generate a number every time 
int main()
{
    int number ,guess , level , i ;
    int attempts = 0 , maxattempts ;

    printf("welcome");
    printf("\n number of levels are : \n 1. for easy(1 to 50\n 2. for medium(1 to 100)\n 3. for hard(1 to 500)\n");

    printf("choose level :");
    scanf("%d", &level);
          srand(time(0));   //  random number generator
    if(level==1)
{
    number = rand()%50 + 1;
    maxattempts = 7;
}
else if(level==2)
{
    number = rand()%100 + 1;
    maxattempts = 7;
}
else
{
    number = rand()%500 + 1;
    maxattempts = 7;
}

while(attempts<maxattempts){

    printf("Enter -1 anytime to quit the game.\n");


    printf("Enter your guess: ");
    scanf("%d",&guess);

    if(guess == -1)
{
    printf("You quit the game.\n");
    printf("The correct number was %d\n", number);
    break;
}


attempts++;

if(guess == number)
{
    printf("yayyy Correct! you won!\n");
    break;
}
else if(guess > number)
{
    printf("Too High!try again\n");
}
else
{
    printf("Too Low! try again\n");
}
}

if(guess != number)
{
    printf("ooops Game Over!\n");
    printf("Correct Number = %d",number);
}

    return 0;

}
