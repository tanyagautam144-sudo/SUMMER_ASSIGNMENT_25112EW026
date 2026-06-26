//Write a program to Create ATM simulation.
#include<stdio.h>
int main()
{
    float balance = 10000 ;
    float deposit_money, withdraw_money , check_balance ;
    float option ;
    
    printf("  *********\n atm simulation \n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n*****");
     printf("\nchoose your preferred option :");
     scanf("%f", &option);
   
     if(option == 1)
{
printf("your current balance is %.2f:", balance);
}

else if (option == 2)
{
    printf("enter amount to be deposited:");
    scanf("%f", &deposit_money);

    balance = balance + deposit_money ;
    printf("your current balance is %.2f:" , balance);
}

else if(option == 3)
{
    printf("enter amount to be withdrawn:");
    scanf("%f",&withdraw_money);

    if(withdraw_money>balance){
        printf("insufficient balance");
    }

    else{
        balance = balance - withdraw_money ;

        printf("current balance is : %.2f", balance);
    }
}

    else if (option == 4){
        printf("exit");
    }
    else{
        printf("you have chosen an invalid option");
    }

return 0;
}