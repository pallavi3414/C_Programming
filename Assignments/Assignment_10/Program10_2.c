 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Display
 // Description : Program to find Area of Rectangle
 // Input : float
 // Output : double
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 double AreaofRect(float fWidth, float fHeight){

    double dRet = fWidth * fHeight;

    return dRet;
 }

 int main(){

    float fValue1=0.0, fValue2=0.0;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f", &fValue1);

    printf("Enter height : ");
    scanf("%f", &fValue2);

    dRet = AreaofRect(fValue1, fValue2);

    printf("Area of Rectangle is %f :" , dRet);
    
    return 0;

 }