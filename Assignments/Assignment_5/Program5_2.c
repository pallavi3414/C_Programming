 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : Find max of two
 // Description : Max of two numbers
 // Input : int, int
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>


 int FindMax(int a, int b)
 {
    
    if(a>b){
        return a;
    }
    else{
        return b;

    }
 }
 int main(){

    int inumber1 , inumber2, result;
    printf("Enter two numbers : ");
    scanf("%d %d", &inumber1, &inumber2);

    result=FindMax(inumber1, inumber2);
    printf("Maximum is : %d\n", result);


    return 0;

 }