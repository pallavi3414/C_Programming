 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : CheckEvenOdd
 // Description : Check EVEN or ODD
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>


 void CheckEVenOdd(int iNo)
 {
    
    if(iNo % 2 == 0){

        printf("Number is even");

    }
    else{

        printf("Number is odd");

    }
 }
 int main(){

    int inumber = 0;
    printf("Enter number : ");
    scanf("%d", &inumber);

    CheckEVenOdd(inumber);

    return 0;

 }