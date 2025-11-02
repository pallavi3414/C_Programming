 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Display
 // Description : Accept amt in US dollar and return its corresponding amt in Indian rs 
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 int DollarTOInR(int iNo1){

   int INR = 0;
   INR = iNo1 *70;
   return INR;
    
 }

 int main(){

    int iValue1=0;
    int iRet = 0;

    printf("Enter Amount : ");
    scanf("%d", &iValue1);

    iRet = DollarTOInR(iValue1);

    printf("Value of INR is %d " , iRet);

        
    return 0;

 }