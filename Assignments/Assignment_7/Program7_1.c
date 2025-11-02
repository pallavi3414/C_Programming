 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Pattern
 // Description : Accept number form user and print that number of $ and * on screen
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void Pattern(int iNo1){

    int iCount = 0;

    if(iNo1 <0){
        iNo1 = -iNo1;
    }
    for(iCount=0; iCount<iNo1; iCount++){
        printf("$\t*\t");
    }
 }

 int main(){

    int iValue1=0;

    printf("Enter number : ");
    scanf("%d", &iValue1);

    Pattern(iValue1);
        
    return 0;

 }