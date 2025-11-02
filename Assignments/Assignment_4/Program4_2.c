 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : FactRev
 // Description : Accept numnber and display its factors in decreasing order
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 int FactRev(int iNo){
    int icnt = 0;

    for(icnt=iNo/2; icnt > 1; icnt--){

        if(iNo % icnt==0){

            printf("%d\t", icnt);
           
        }
       
    }
  
 }

 int main(){

    int iValue = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;

 }