 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Display
 // Description : Program to find even factorial of given number
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 int EvenFactorial(int iNo1){

    int iCount = 0;

    int iEvenFact = 1;

    if(iNo1<0){
      iNo1 = -iNo1;
    }
    
    for(iCount=1; iCount <= iNo1; iCount++){

      if(iCount%2==0){
        iEvenFact = iEvenFact*iCount;
      }
    }

    return iEvenFact;
 }

 int main(){

    int iValue1=0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue1);

    iRet = EvenFactorial(iValue1);

    printf("Even factorial of number is : %d" , iRet);

        
    return 0;

 }