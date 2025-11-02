 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : PrintNumbers
 // Description : Print all numbers from 1 to N
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void PrintNumbers(int iNo)
 {

    int i=0;

    if(iNo < 0){
        
      iNo = -iNo;
    }

   for (i=1; i <= iNo ; i++){

         printf("%d\t", i);

    }   
 }

 int main(){

   int iValue = 0; 

   printf("Enter number: ");
   scanf("%d", &iValue);

   PrintNumbers(iValue);
   
   return 0;
 }