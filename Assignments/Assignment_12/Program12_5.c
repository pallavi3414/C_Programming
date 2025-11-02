 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : isDivisibleby5
 // Description : Check If number is divisible by 5
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>
 #include<stdbool.h>

 bool isDivisibleby5(int iNo){
    

    if(iNo < 0){
        
      iNo = -iNo;
    }

    if(iNo % 5 == 0){
        return true;
    }
    else{
        return false;
    }
   
 }

 int main(){

   int iValue = 0; 

   printf("Enter number: ");
   scanf("%d", &iValue);

   printf("%s\n", isDivisibleby5(iValue)? "Yes" : "No");
   
   return 0;
 }