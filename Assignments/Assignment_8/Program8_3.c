 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Display
 // Description : Program to find factorial of given number
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 int Factorial(int iNo1){

    int iCount = 0;
    int ifactorial = 1;
    if(iNo1<0){
      iNo1 = -iNo1;
    }

    for(iCount=1; iCount<=iNo1; iCount++){
     ifactorial= ifactorial*iCount;
    }

    return ifactorial;

 }

 int main(){

    int iValue1=0;
    int iRet = 0;

    printf("Enter non zero number : ");
    scanf("%d", &iValue1);

    iRet = Factorial(iValue1);

    printf("Factorial of %d is %d", iValue1, iRet);
        
    return 0;

 }