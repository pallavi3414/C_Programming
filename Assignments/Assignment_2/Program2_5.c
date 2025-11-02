 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : ChkEven
 // Description : Accept numnber and check if its even or odd
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>
 #include<stdbool.h>

 bool ChkEven(int iNo){

    if(iNo%2==0){
        return true;
    }
    else{
       return false;
    }

 }

 int main(){

    int iValue = 0;
    bool bRet = false;

    printf("Enter number");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet){
      printf("Number is Even");
    }
    else{
      printf("Number is odd");
    }

    return 0;

 }