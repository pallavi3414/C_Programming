 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Display
 // Description : Accept Single digit number and print it to word
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void Display(int iNo1){

   if(iNo1 ==1){
      printf("One");
   }
   else if(iNo1 ==2){
      printf("Two");
   }
    else if(iNo1 ==3){
      printf("Three");
   }
    else if(iNo1 ==4){
      printf("Four");
   }
    else if(iNo1 ==5){
      printf("FIve");
   }
    else if(iNo1 ==6){
      printf("SIx");
   }
    else if(iNo1 ==7){
      printf("Seven");
   }
    else if(iNo1 ==8){
      printf("Eight");
   }
    else if(iNo1 ==9){
      printf("Nine");
   }else{
      printf("Enetred number is either 0 or invalid");
   }

 }

 int main(){

    int iValue1=0;

    printf("Enter number : ");
    scanf("%d", &iValue1);

    Display(iValue1);
        
    return 0;

 }