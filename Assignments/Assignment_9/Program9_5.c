 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Display
 // Description : Program to find Difference between odd and even factorial
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 int DiffFactorial(int iNo1){

    int iCount = 0;
    int iOddFact = 1;
    int iEvenFact = 1;
    int iDiff = 0;

    for(iCount=1; iCount <= iNo1; iCount++){

      if(iCount%2==0){
        iEvenFact = iEvenFact*iCount;
      }
      else{
        iOddFact = iOddFact*iCount;  
      }
    }

    iDiff = iEvenFact-iOddFact;
      
    if(iDiff<0){
      iDiff=-iDiff;
    }
    
    return iDiff;

 }

 int main(){

    int iValue1=0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue1);

    iRet = DiffFactorial(iValue1);

    printf("Diff of even and odd factorial  is :  %d " , iRet);

        
    return 0;

 }