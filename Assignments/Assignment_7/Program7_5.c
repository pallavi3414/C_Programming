 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Display
 // Description : Accept N form user and print first 5 multiples of N
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void Display(int iNo1){

    int iCount = 0;

    for(iCount=1; iCount<=5; iCount++){

        if(iNo1/2 != 0){

          printf("%d\t", iNo1*iCount);
          
        }
    }
 }

 int main(){

    int iValue1=0;

    printf("Enter number : ");
    scanf("%d", &iValue1);

    Display(iValue1);
        
    return 0;

 }