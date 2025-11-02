 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : PrintOddNumbers
 // Description : Print all odd numbers from 1 to N
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void PrintOddNumbers(int iNo)
 {

    int i=0;

    if(iNo < 0){
        
      iNo = -iNo;
    }

   for (i=1; i <= iNo ; i++){

    if(i % 2 != 0)
         printf("%d\t", i);

    }   
 }

 int main(){

   int iValue = 0; 

   printf("Enter number: ");
   scanf("%d", &iValue);

   PrintOddNumbers(iValue);
   
   return 0;
 }