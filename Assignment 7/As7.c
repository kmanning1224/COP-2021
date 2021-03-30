#include <stdio.h>
#include <stdlib.h>

//Katherine Manning
//Assignment 7 - Create Array that takes input up to count of 50
//Cancel out array once -999 is entered


//Define array range
#define RANGE 50
int main(void)
{   
    //declare array with range, i for loop
    int  arr[RANGE], count;
    //start loop to take input and up to 50 inputs
    for(int i = 0; i<RANGE; i++){
        printf("Please enter a number [-999 to quit] :\n");
        
        scanf("%d", &arr[i]);
        //if statement to break loop if -999 is entered
        if(arr[i] == -999){
            count = i;
            break;
        }
        else{
            count = i+1;
        }
    }
    //final output once loop is broken or fulfilled 50 inputs
    printf("List of numbers entered:\n");
    //use arr[i] as count so if loop is broken before 50 it wont continue
    for(int i = 0; i<count; i++){
        printf("[%d]. %d\n", i, arr[i]);
    }
system("pause");
}


