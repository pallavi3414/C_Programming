 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : DisplayConvert
 // Description : Accept total marks and obtained marks from user and calculate %
 // Input : int int
 // Output : float
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 float Percentage(int iNo1, int iNo2){

   float fPercentage = iNo1/iNo2*100;
   return fPercentage;
 }

 int main(){

    int iValue1=0, iValue2=0;
    float fRet=0.0;

    printf("Enter total marks");
    scanf("%d", &iValue1);

    printf("Enter obtained marks");
    scanf("%d", &iValue1);

    fRet = Percentage(iValue1, iValue2);

    
    printf("Percentage  is : %f " , fRet);
        
    return 0;

 }