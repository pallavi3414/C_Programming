 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Find max of two
 // Description : Check EVEN or ODD
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>


 void CheckLeapYear(int iNo)
 {
    
    if(iNo % 4 == 0){

        printf("Year is Leap");

    }
    else{

        printf("Year is Not Leap");

    }
 }
 int main(){

    int iYr = 0;
    printf("Enter year ");
    scanf("%d", &iYr);

    CheckLeapYear(iYr);

    return 0;

 }