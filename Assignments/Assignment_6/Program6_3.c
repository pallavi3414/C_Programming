 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : DisplayConvert
 // Description : Accept two numnbers and check whether those numbers are equal or not
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>
 #include<stdbool.h>

 bool checkEqual(int iNo, int iNo2){

    if(iNo == iNo2 ){
        return true;
    }
    else{
        return false;

    }

 }

 int main(){

    int iValue1, iValue2= 0;
    bool bRet= false;

    printf("Enter two numbers : ");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = checkEqual(iValue1, iValue2);

    if(bRet){

        printf("Equal");
        
    }
    else{

        printf("Not Equal");

    }
    return 0;

 }