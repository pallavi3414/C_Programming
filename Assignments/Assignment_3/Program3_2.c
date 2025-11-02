 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : DisplayFactor
 // Description : Write a program which accepts one number form user and print even factors of that number on screen
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void DisplayFactor(int iNo){

    int iCnt = 0;

    if(iNo < 0){
        
       return;
    }

    for(iCnt=2; iCnt<=iNo/2; iCnt++){

        if(iCnt%2 == 0){
            printf("%d\t" , iCnt);
        }

    }
 }
 
 int main(){

   int iValue = 0; 

   printf("Enter number : ");
   scanf("%d", &iValue);

   DisplayFactor(iValue);
   
   return 0;
 }