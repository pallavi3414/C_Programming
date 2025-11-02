 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : RangeSumEven
 // Description : Accept range from user and display sum of all even numbers in that range
 // Input : int, int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>


 int RangeSumEven(int a, int b)
 {
    
    int iCnt = 0;
    int iSum = 0;

     if(a<b){
        for(iCnt = a; iCnt<=b; iCnt++){
            if(iCnt%2 == 0){
                  iSum = iSum+iCnt;
            }            
        }
    }
    return iSum;
 }
 int main(){

    int iValue1 = 0 , iValue2=0;
    int iRet = 0;

    printf("Enter starting point ");
    scanf("%d", &iValue1);

    printf("Enter ending point ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Sum of all numbers in given range is %d", iRet);


    return 0;

 }