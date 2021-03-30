#include <stdio.h>
#include <stdlib.h>

//Katherine Manning
//3/11/2021

/*Assignment 5 - Part 1 Create Create a loop that will output all odd multiples of 9 that are greater than zero and less than 100.
9, 27, 45, 63, 81, 99*/
oddLoop (){
    //set base vars
    int baseNumber= 0;
    int maxCount = 99;
    printf("\nAll odd numbers divisble by 9 are :");
    //create sentinel loop for output
    while(baseNumber<maxCount){
        //set up to multiply by 1 while adding 9 each time
        baseNumber*=1;
        baseNumber+=9;
        
        //create if statement that if divisible by 2 it is false
        if(baseNumber%2 == 0){
            //do nothing
            
        }
        //all else will be true and print only odd multiples
        else{
            printf(" %d,  ", baseNumber);
            
        }
    }

}
/*Create a loop that will output all the numbers less than 200 that are evenly
divisible (meaning remainder is zero) by both 5 and 8.*/
evenLoop(){
    //set vars
    int maxCount = 200;
    int startingNum = 0;
    printf("\nThe output of all numbers less than 200 that are divisble by 5 & 8 are : ");
    //set sentinel condtion, everything under 200
    while(startingNum<maxCount){
        //add to starting num until condtion is met
        startingNum++;
        //set if for anything divisble by 5 AND 8
        if(startingNum%5 == 0 && startingNum%8 == 0){
            //if divisble by both, print the multiple out
            printf("%d,", startingNum);
            
        }

    }

}
/*Create a loop that will calculate the sum of the multiples of 8 
that are between 100 and 500. Output the sum only. 
Please remember not to display the multiples.*/
sumOfEight(){

    //set starting vars
    int sum = 0;
    int startNum = 99;
    int maxCount = 500;
    int minCount = 99;
    //set up conditions for sentinel, between 100 and 500
    while(startNum < maxCount && startNum >= minCount){
        startNum++;
        //printf("TEST ( %d )", startNum);

        //if anything between 100 and 500 is divisble by 8, add to sum
        if(startNum%8 == 0){
            sum = sum+startNum;
            
        }
    }
    //return sum
    printf("\nThe sum of all multiples of 8 between 100 & 500 is:");
    return sum;
}

/*Create a loop that will output the sum of all 
odd numbers between 10 and 100. 
Do not show the odd numbers in the output. 
Just display the sum.*/
sumOfOdds(){
    //setting base vars
    int baseStart = 9;
    int baseMax = 100;
    int startNum = 10;
    int sum = 0;
    //setting range for sentinel loop
    while(startNum < baseMax && startNum > baseStart){
        //add on to starting number until max is met
        startNum++;
        //if starting number is divisble by two, do nothing
        if(startNum%2 == 0){
            //printf("test even %d", startNum);
        }
        //everything else is added to the sum
        else{
            sum+=startNum;
            
        }
        
    }
    //return the sum
    printf("\n The sum of all odd numbers between 10 & 100 is:");
    return sum;
}
main (){
    int oddNum;
    int evenNum;
    int sum;
    printf("%d",oddLoop(oddNum));
    printf("%d",evenLoop(evenNum));
    printf("%d",sumOfEight(sum));
    printf("%d", sumOfOdds(sum));
    
}

