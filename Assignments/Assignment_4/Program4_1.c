 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : MultFact
 // Description : Accept numnber and display multiplication of its factors
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 int MultFact(int iNo){
 
    int icnt = 0;
    int multFactors = 1;

    for(icnt=2; icnt < iNo/2; icnt++){

        if(iNo % icnt==0){

            printf("%d", icnt);
            multFactors=icnt*multFactors;
        }
       
    }
    return multFactors;
 }

 int main(){

    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d", iRet);

    return 0;

 }