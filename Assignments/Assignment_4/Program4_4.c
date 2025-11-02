 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : SummOfNonFactors
 // Description : Accept numnber and return summation of its non factors 
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 int SummOfNonFactors(int iNo){
    int icnt = 0;
    int sumNonFactors = 0;

    for(icnt=2; icnt < iNo; icnt++){

        if(iNo % icnt != 0){

            printf("%d", icnt);
            sumNonFactors=icnt+sumNonFactors;
        }
        
       
    }


    return sumNonFactors;
 }

 int main(){

    int iValue = 0;
    int iRet= 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = SummOfNonFactors(iValue);

    printf("%d", iRet);
    
    return 0;

 }