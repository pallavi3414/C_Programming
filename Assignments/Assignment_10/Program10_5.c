 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : SquareMeter
 // Description : Accept area in sq feet and convert to sq meter
 // Input : int
 // Output : double
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

 double SquareMeter(int iValue){

    double dsquareMeter = iValue*0.0929;
    return dsquareMeter;
 }

 int main(){

    int iValue1=0;
    double dRet = 0.0;

    printf("Enter area in sq feet : ");
    scanf("%d", &iValue1);

    dRet = SquareMeter(iValue1);

    printf("%d square feet is %f square meter :" , iValue1, dRet);
    
    return 0;
 }