 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : SumEvenFactors
 // Description : Print sum all even factors of given number
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 int SumEvenFactors(int iNo){

    int i = 0;
    int iSum = 0;

    if(iNo < 0){
        
      iNo = -iNo;
    }

   for (i=2; i <= iNo/2 ; i++){

    if(iNo % i == 0 && iNo % 2 == 0){
        
        iSum = iSum+i;
                 
    }

    }   

    return iSum;
 }

 int main(){

   int iValue = 0; 
   int iRet = 0;


   printf("Enter number : ");
   scanf("%d", &iValue);

   iRet = SumEvenFactors(iValue);

   printf("Sum of factors for number %d is : %d ", iValue, iRet);
   
   return 0;
 }