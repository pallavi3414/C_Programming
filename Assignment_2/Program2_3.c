 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Display
 // Description : Accept one number from user and print Hello if number is less than 10 otherwise print Demo
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void Display(int iNo)
 {

    if (iNo < 10){
        printf ("Hello");
   }
   
   else{
     printf ("Demo");
   }
 }

 int main(){

   int iValue = 0;
   printf("Enter number");
   scanf("%d", &iValue);

   Display(iValue);
   
   return 0;
 }