 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : RangeDisplay
 // Description : Accept range from user and display all numbers in that range
 // Input : int, int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void RangeDisplay(int a, int b)
 {
    int iCnt = 0;

    if(a<b){
        for(iCnt = a; iCnt<=b; iCnt++){
            printf("%d\t", iCnt);
        }
    }
      
 }
 int main(){

    int iValue1 = 0 , iValue2=0;

    printf("Enter starting point ");
    scanf("%d", &iValue1);

    printf("Enter ending point ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;

 }