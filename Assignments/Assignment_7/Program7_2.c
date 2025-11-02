 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Display
 // Description : Accept number form user and print numbers till that number
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void Display(int iNo1){

    int iCount = 0;

    if(iNo1 <0){
        iNo1 = -iNo1;
    }
    for(iCount=1; iCount<=iNo1; iCount++){
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