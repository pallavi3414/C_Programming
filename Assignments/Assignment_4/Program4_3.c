 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : NonFactors
 // Description : Accept numnber and display its non factors 
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void NonFactors(int iNo){

    int icnt = 0;

    for(icnt=2; icnt < iNo; icnt++){

        if(iNo % icnt != 0){

            printf("%d\t", icnt);
        }
       
    }

 }

 int main(){

    int iValue = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    NonFactors(iValue);
    
    return 0;

 }