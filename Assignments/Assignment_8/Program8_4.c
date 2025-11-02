 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Display
 // Description : Program to print table of given number
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void Table(int iNo1){

    int iCount = 0;

    for(iCount=1; iCount <= 10; iCount++){

             printf("%d\t", iNo1 *iCount);
    }
 }

 int main(){

    int iValue1=0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue1);

    Table(iValue1);
        
    return 0;

 }