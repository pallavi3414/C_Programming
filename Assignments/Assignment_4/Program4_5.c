 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : FactDiff
 // Description : Accept numnber and return difference between summation of its factors and non factors 
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 int FactDiff(int iNo){

    int icnt = 0;
    int sumFactors = 0, sumNonFactors =0;

    for(icnt=2; icnt < iNo; icnt++){

        if(iNo % icnt == 0){

            printf("%d", icnt);
            sumFactors=icnt+sumFactors;
        }
        else{
            sumNonFactors=icnt+sumNonFactors;
        }
              
    }

 }

 int main(){

    int iValue = 0;
    int iRet= 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);
    
    return 0;

 }