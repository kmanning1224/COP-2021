#include <stdio.h>
#include <stdlib.h>
//Katherine Manning
//Feb 09, 2020
//Goal of this Assignment is to take the input of change types and output the total.
double sum(double P, double N, double D, double Q){
    return P * 0.01 + N * 0.05 + D * 0.10 + Q * 0.25;
//Function to take input and create correct value with change type
}
int main() {
    int P2, N2, D2, Q2;
    double results;
    //set variables for input and output

    printf("How many pennies do you have?");
    scanf_s("%d", &P2);
    printf("You entered : %d\n", P2);
    printf("How many nickels do you have?\n");
    scanf_s("%d", &N2);
    printf("You entered: %d\n", N2);
    printf("How many dimes do you have?\n");
    scanf_s("%d", &D2);
    printf("You entered: %d\n", D2);
    printf("How many Quarters do you have?\n");
    scanf_s("%d", &Q2);
    printf("You entered: %d\n", Q2);

    results = sum(P2,N2,D2,Q2);
    //run function created earlier to get total
    printf("You have a total of: $%.2f\n", results);
    printf("Thank you.\n");
    system("pause");
    return 0;
}
