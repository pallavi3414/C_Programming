 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Display
 // Description : Accept one number and print that number of * on screen
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void Display(int iNo)
 {

    int iCnt = 0;
    if(iNo<0){

        iNo = -iNo;
    }

    while (iCnt < iNo){

        printf ("*\t");

        iNo--;
   }
 }

 int main(){

   int iValue = 0;
   printf("Enter number");
   scanf("%d", &iValue);

   Display(iValue);
   
   return 0;
 }