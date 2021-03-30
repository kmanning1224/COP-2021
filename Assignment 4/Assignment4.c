#include <stdio.h>
#include <stdlib.h>
//Katherine Manning
//Feb 26, 2021
/*Create program that takes user input on grade
Only accept numbers 0-100. Use -1 to quit program
70 is min passing grade
present error if wrong number input
calc perc passing
*/
int main(void) {
    //Declare vars
    int input;
    float passCount = 0;
    float totalCount = 0;
    int countedGrades;
    float percentTotal;
    float finalTotal;
 //Begin Sentinel loop for grades
while (input != -1)
{
    printf("Please input grade (-1 to end program):");
    scanf ("%i", &input);
    
    //Post error if any number over 100 and under -1 is inputted
    if (input >= 101){
        printf("That is not a valid grade.\n");
        
    }
    if(input <= -2){
        printf("That is not a valid grade.\n");
        
    }
    //Only include grades between 69 and 100 (Grades over 70 are passing)
    if(input > 69 && input < 101){
        //Count how many inputted passing grades and total
        passCount++;
        //passCountforFinal++;
        totalCount++;
        //Testing that count is working
        //printf("Testing pass count : %lf\n", passCount); 
   
    }
    if(input <= 69 && input >=0){
        //Make sure count includes non passing grades also
        totalCount++;
        //printf("Total Count: %lf\n", totalCount);
    }

}
//Output passing avg of total grades
percentTotal = passCount / totalCount;
//Testing that percentTotal is correct
//printf("percentTotal output: %lf\n", percentTotal);

//Get percentage of passing grades
finalTotal = percentTotal * 100;
printf("-----------------------------------------\n");
printf("\nYou entered %.2lf passing grades.\n", passCount);
printf("-----------------------------------------\n");
printf("\nPercentage passing is: %.2lf\n", finalTotal);
printf("-----------------------------------------\n");
system("pause");

}
