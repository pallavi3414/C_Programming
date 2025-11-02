 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : FhToCelcius
 // Description : Accept temp in Farenhite and convert to celcius
 // Input : float
 // Output : double
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

 double FhToCelcius(float fTemp){

    double dCelcius = (fTemp-32)*(5/9);

    return dCelcius;
 }

 int main(){

    float fValue1=0.0;
    double dRet = 0.0;

    printf("Enter temp in Farhenite : ");
    scanf("%f", &fValue1);

    dRet = FhToCelcius(fValue1);

    printf("%f Farhenite is %f Celcius :" , fValue1, dRet);
    
    return 0;
 }