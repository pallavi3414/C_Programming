 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : OddFactorial
 // Description : Program to find odd factorial of given number
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 int OddFactorial(int iNo1){

    int iCount = 0;

    int iOddFact = 1;

   if(iNo1<0){
      iNo1 = -iNo1;
    }

    for(iCount=1; iCount <= iNo1; iCount++){

      if(iCount%2 != 0){
      
      //printf("%d\n", iCount);
      iOddFact = iOddFact*iCount;
      }
    }

    return iOddFact;

 }

 int main(){

    int iValue1=0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d", &iValue1);

    iRet = OddFactorial(iValue1);

    printf("Odd factorial of number is : %d " , iRet);

        
    return 0;

 }