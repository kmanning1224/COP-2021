#include <stdio.h>
#include <stdlib.h>


int balance = 2000;
 main(){

int selection;
printf("\n----------------------------------------------\n");
printf("\n\nPlease enter an option from this list\n\n");
printf("Input 1 to deposit.\n");
printf("Input 2 to withdraw.\n");
printf("Input 3 to see current balance.\n");
printf("Input 4 to exit.\n");
printf("\n----------------------------------------------\n");
scanf("%d", &selection);
switch(selection)
{
    case 1:
        printf("Please input your deposit amount : ");
        //printf("current balance : %d": )
        int deposit;
        //float balance = balance;
        scanf("%d", &deposit);
        balance+=deposit;
        printf("\nYou are depositing : $%d", deposit);
        printf("\nYour total balance will now be : $%d", balance);
        break;
    case 2: 

        printf("Please input how much to withdraw : ");
        int withdraw;

        scanf("%d", &withdraw);
        printf("You wish to withdraw : $%d\n",withdraw);
        balance-=withdraw;

        if (withdraw > balance){
            printf("Insufficient funds. Please try again.");

    }
        else{
            
            printf("Your total balance will now be :$%d", balance);
    }
    break;
    
    case 3:;
    printf("Your current balance is : %i",balance);
    break;
    
    case 4:
    printf("Thank you for using ATM\n");
    break;
    
    default:
    printf("Incorrect Input. Please try again.");
    break;

}
main();
return 0;
}

