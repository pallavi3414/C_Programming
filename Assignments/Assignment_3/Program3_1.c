 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Display
 // Description : Write a program which accepts one number form user and print that number of even numbers on screen
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void PrintEven(int iNo)
 {

    int iCnt = 0;

    if(iNo < 0){
        
       return;
    }

    for(iCnt=2; iCnt<=iNo*2; iCnt=iCnt+2){

            printf("%d\t" , iCnt);
          
        }

    }

 
 int main(){

   int iValue = 0; 

   printf("Enter number : ");
   scanf("%d", &iValue);

   PrintEven(iValue);
   
   return 0;
 }