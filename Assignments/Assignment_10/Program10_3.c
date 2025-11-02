 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : KMtoMeter
 // Description : Accept dist in km and convert to meters
 // Input : float
 // Output : double
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 int KMtoMeter(int iKms){

    int iRet = iKms * 1000;

    return iRet;
 }

 int main(){

    int iValue1=0;
    int iRet = 0;

    printf("Enter km");
    scanf("%d", &iValue1);

    iRet = KMtoMeter(iValue1);

    printf("%d KMs is %d Meters" , iValue1,iRet );
    
    return 0;

 }