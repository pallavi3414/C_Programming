 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : PrintFactors
 // Description : Print all factors of given  number
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void PrintFactors(int iNo)
 {

    int i=0;

    if(iNo < 0){
        
      iNo = -iNo;
    }

   for (i=2; i <= iNo/2 ; i++){

    if(iNo%i == 0){
         printf("%d\t", i);
    }

    }   
 }

 int main(){

   int iValue = 0; 

   printf("Enter number: ");
   scanf("%d", &iValue);

   PrintFactors(iValue);
   
   return 0;
 }