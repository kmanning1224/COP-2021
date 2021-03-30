#include <stdio.h>
#include <stdlib.h>
//Katherine Manning
//03/15/21
//COP 1000C
/*Goal of program: Create working ATM with switch case
ATM has to update balance on every change and exit with thank-You
message. Program needs to use switch case.*/



//declare balance
double balance = 2000.00;
//begin func
 main(){
//declare selection for switch case
int selection;
double deposit, withdraw;

//set up menu for user selection and input
printf("\n----------------------------------------------\n");
printf("\n\nPlease enter an option from this list\n\n");
printf("Input 1 to deposit.\n");
printf("Input 2 to withdraw.\n");
printf("Input 3 to see current balance.\n");
printf("Input 4 to exit.\n");
printf("\n----------------------------------------------\n");
//scan input to start switch case
scanf("%d", &selection);
switch(selection)
{
    case 1: //Deposit funds from input
    //Begin with print statement to ask for input
        printf("Please input your deposit amount : ");
 
        scanf("%lf", &deposit);
    //Add input to the  balance
        balance+=deposit;
    //Print out new balance
        printf("\nYou are depositing : $%.2lf", deposit);
        printf("\nYour total balance will now be : $%.2lf", balance);
        //Break to menu 
        break;
    case 2: //Withdraw funds from input
    //Begin with print to accept input
        printf("Please input how much to withdraw : ");

        scanf("%lf", &withdraw);
        printf("You wish to withdraw : $%.2lf\n",withdraw);
        //Deduct input from balance
        
        /*Create if statement to output error if 
        withdraw is large than balance*/
        if (withdraw > balance){
            printf("Insufficient funds. Please try again.");

    }   /*else for if withdraw is less than balance 
    output new amount*/
        else{
            balance-=withdraw;
            
            printf("Your total balance will now be :$%.2lf", balance);
    }
    //break to menu
    break;
    
    case 3:;//Display current balance
    printf("Your current balance is : $%.2lf",balance);
    //break to menu
    break;
    
    case 4://Exit the program
    printf("Thank you for using ATM\n");
    //Add pause to display thankyou message
    system("pause");
    exit(0);

    
    default:/*Set default to output error for any number
    other than 1-4 entered*/
    printf("Incorrect Input. Please try again.");
    //break back to menu
    //break;

}
//make sure function runs on loop till exit
main();
}

