 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : PrintEvenNumbers
 // Description : Print all even numbers from 1 to N
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void PrintEvenNumbers(int iNo)
 {

    int i=0;

    if(iNo < 0){
        
      iNo = -iNo;
    }

   for (i=1; i <= iNo ; i++){

    if(i % 2 == 0)
         printf("%d\t", i);

    }   
 }

 int main(){

   int iValue = 0; 

   printf("Enter number: ");
   scanf("%d", &iValue);

   PrintEvenNumbers(iValue);
   
   return 0;
 }