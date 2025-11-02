 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Check
 // Description : Accept one number and check if it is divisible by 5 or not
 // Input : int
 // Output : bool
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>
 #include<stdbool.h>

 bool Check(int iNo)
 {

    if( iNo % 5 == 0){
       return true;
    }
    else {
        return false;
    }
 }

 int main(){

   int iValue = 0;
   bool bRet = false;

   printf("Enter number");
   scanf("%d", &iValue);
   
   bRet = Check(iValue);

   if(bRet==true){

        printf("Divisible by 5");

   }
   else{

        printf(" Not divisible by 5");

   }

    return 0;
 }