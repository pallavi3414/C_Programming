 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Accept
 // Description : Accept one number and print that number of * on screen
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>
 #include<stdbool.h>

 void Accept(int iNo)
 {
    int iCnt = 0;

    for (iCnt=0; iCnt<iNo; iCnt++){

        printf ("*");
   }
 }

 int main(){

   int iValue = 0;
   iValue =5;

   Accept(iValue);

   return 0;
 }