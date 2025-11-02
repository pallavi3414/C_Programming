 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Display
 // Description : Accept number form user and print its number line
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void Display(int iNo1){

    int iCount = 0;

    for(iCount= -iNo1; iCount<=iNo1; iCount++){
        printf("%d\t", iCount);
    }
 }

 int main(){

    int iValue1=0;

    printf("Enter number : ");
    scanf("%d", &iValue1);

    Display(iValue1);
        
    return 0;

 }