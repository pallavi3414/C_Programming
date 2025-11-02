 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : CheckNumberType
 // Description : Check if number is positve negative or 0
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>


 void CheckNumberType(int iNo)
 {
    
    if(iNo == 0){

        printf("Number is 0");

    }
    else if (iNo < 0){

        printf("Number is Negative");

    }
    else{
        
        printf("Number is positive");
    
    }
 }
 int main(){

    int inumber = 0;
    printf("Enter number : ");
    scanf("%d", &inumber);

    CheckNumberType(inumber);

    return 0;

 }