 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Display
 // Description : Write a program which accepts one number form user and print even factors of that number on screen
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void DisplayEvenFactor(int iNo)
 {

    int i=0;

    if(iNo <= 0){
        
      iNo = -iNo;
    }

   for (i=1; i <= iNo ; i++){

    if(i%2 == 0){
         printf("%d", i);
    }

    }   
 }

 int main(){

   int iValue = 0; 

   printf("Enter number");
   scanf("%d", &iValue);

   DisplayEvenFactor(iValue);
   
   return 0;
 }