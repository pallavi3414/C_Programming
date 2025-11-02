 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Display
 // Description : Accept number and print below pattern
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void Display(int iNo1){

    int iCount = 0;

    for(iCount=0; iCount<iNo1; iCount++){

             printf("*\t");
    }
    for(iCount=0; iCount<iNo1; iCount++){

             printf("#\t");
    }
 }

 int main(){

    int iValue1=0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue1);

    Display(iValue1);
        
    return 0;

 }