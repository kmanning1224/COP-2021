

main(void){
    //Start by declaring empty var for inputs
int WeightOfPackage = 0;
int Cost100Ship = 10;
int Cost50Ship = 5;
int PackageShipDist = 0;

float InputWeight;
int InputDistance;
float ShippingCost;
float FinalPrice;
//Run scanf to take inputs
printf("Please input how much your package weighs:\n");
scanf("%d", &WeightOfPackage);
printf("Thankyou, I see your package weighs : %d \n", WeightOfPackage);
printf("Now please enter how far your package needs to go: \n");
scanf("%d", &PackageShipDist);
//Create if else to calculate shipment costs
//Set up for Packages under 100 but over 50
if (WeightOfPackage <=100 && PackageShipDist <=1000){
  ShippingCost = (PackageShipDist / 1000) * Cost100Ship;
  //Rate for shipping packages over 50 is $10.00
    }
    if(PackageShipDist >=1001)
    {
        ShippingCost = (PackageShipDist / 1001) * Cost100Ship;

    }
//Set up for Packages 50 and under
if (WeightOfPackage <= 50 && PackageShipDist <=1000) {
    ShippingCost = (PackageShipDist / 1000) * Cost50Ship;
    }
    if(WeightOfPackage <=50 && PackageShipDist >=1001)
    {
        ShippingCost = (PackageShipDist / 1001) * Cost50Ship;

    }
    
//Else statement for packages dont meet criteria needed
    //
    FinalPrice = ShippingCost;

    printf("Your shipping will cost $%.2lf \n", FinalPrice);
    system("pause");
}