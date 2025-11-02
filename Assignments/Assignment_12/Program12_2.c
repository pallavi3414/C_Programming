 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : CountFactors
 // Description : Print all factors of given  number
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 int CountFactors(int iNo){

    int i = 0;
    int iCnt = 0;

    if(iNo < 0){
        
      iNo = -iNo;
    }

   for (i=2; i <= iNo/2 ; i++){

    if(iNo % i == 0){
         iCnt++;
    }

    }   

    return iCnt;
 }

 int main(){

   int iValue = 0; 
   int iRet = 0;


   printf("Enter number : ");
   scanf("%d", &iValue);

  iRet = CountFactors(iValue);

  printf("Count of factors for number %d is : %d ", iValue, iRet);
   
   return 0;
 }