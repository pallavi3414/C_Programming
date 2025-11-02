 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Display
 // Description : 
 // < 50 = small, 50 < N <100 = Medium , >100 = large
 // Input : int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 void Display(int iNo1){

        if(iNo1 < 50){
            printf("Number is small");         
        }
        else if(iNo1> 50 && iNo1< 100){
            printf("Number is medium");    
        }
        else{
            printf("Number is greater");  
        }
       
 }

 int main(){

    int iValue1=0;

    printf("Enter number : ");
    scanf("%d", &iValue1);

    Display(iValue1);
        
    return 0;

 }