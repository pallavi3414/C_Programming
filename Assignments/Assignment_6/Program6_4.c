 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : DisplayConvert
 // Description : Accept 3 numnbers and print its multiplication
 // Input : int int int
 // Output : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 int Multiply(int iNo1, int iNo2, int iNo3){
    int iRet = 0;
    iRet = iNo1*iNo2*iNo3;
    return iRet;
 }

 int main(){

    int iValue1=0, iValue2=0, iValue3=0, iRet=0;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &iValue1, &iValue2, iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    
    printf("Multiplication  is : %d " , iRet);
        
    return 0;

 }