#include <stdio.h>
#include <stdlib.h>
//Katherine Manning - Feb 13, 2021
//Shipping Cost Calculator
//The goal of this program is to create a calculator that takes user input and then outputs the correct
//shipping costs based on weight and distance.
main(){
    //Declare Variables for Input and Output
    int PackageWeight, ShippingDist;
    double FinalShippingPrice, ShippingPrice;
    //Begin Input taking
    printf("This calculator will tell you the cost of shipping your package. \n");
    printf("Please input the weight of your packge: \n");
    scanf("%d", &PackageWeight);
    printf("Your package weighs %d pounds \n", PackageWeight);

//This calculator does not accept packages over 100 Pounds, so there needs to be a way to reject them.
if (PackageWeight >=101){
    printf("We do not ship packages over 100 pounds, sorry.\n");
    system("pause");
}
//Set the shipping price for packages over 50 and under 100 pounds.
    if (PackageWeight <=100 && PackageWeight >51){
        ShippingPrice = 10.00;
    }
    //Set the price for packages under 50.
        if (PackageWeight <=50){
            ShippingPrice = 5.00;    
            }
            printf("How many miles does your package need to go? : \n");
            scanf ("%d", &ShippingDist);
             //Set up shipping calc for over 1,000 miles. 
            if (ShippingDist >=1001){ 
                FinalShippingPrice = (ShippingDist / 1001 + 1) * ShippingPrice;
                printf("Shipping cost will be : $%.2lf\n", FinalShippingPrice);
                }
                //Set up shipping for packages under 1000 miles.
                if (ShippingDist <=1000) {
                    FinalShippingPrice = ShippingPrice;
                    printf("Shipping cost will be : $%.2lf\n", FinalShippingPrice);
                    }
    system("pause");
}