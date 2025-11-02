 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : DisplayConvert
 // Description : Accept numnber and check whether that number is graeter than 100 or not
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>
 #include<stdbool.h>

 bool checkGreater(int iNo){

    if(iNo > 100 ){
        return true;
    }
    else{
        return false;

    }

 }

 int main(){

    int iValue = 0;
    bool bRet= 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = checkGreater(iValue);

    if(bRet){

        printf("Greater");

    }
    else{

        printf("Smaller");

    }
    return 0;

 }