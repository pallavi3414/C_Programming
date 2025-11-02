 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : SumNaturalNumbers
 // Description : Print sum of all natural numbers from 1 to N
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 int SumNaturalNumbers(int iNo)
 {

    int i=0, iSum = 0;

    if(iNo < 0){
        
      iNo = -iNo;
    }

   for (i=1; i <= iNo ; i++){

      iSum = iSum + i;

    }

    return iSum;

 }
 int main(){

   int iValue = 0;

   printf("Enter number: ");
   scanf("%d", &iValue);

   printf("%d\n",SumNaturalNumbers(iValue));
   
   return 0;
 }