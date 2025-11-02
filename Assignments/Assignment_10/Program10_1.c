 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : AreaofCircle
 // Description : Program to find Area of circle
 // Input : float
 // Output : double
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 double AreaofCircle(float fradius){

    double dRet = 2*3.14*fradius;

    return dRet;
 }

 int main(){

    float fValue1=0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%f", &fValue1);

    dRet = AreaofCircle(fValue1);

    printf("Area of circle is %f :" , dRet);
    
    return 0;

 }