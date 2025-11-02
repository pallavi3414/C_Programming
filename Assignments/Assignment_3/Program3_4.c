 //////////////////////////////////////////////////////////////////////////////////
 //
 // Function Name : DisplayConvert
 // Description : Accept one character from user and convert case of that character
 // Input : char
 // Author : Pallavi Prakash Chavan
 // Date : 2/Nov/2025
 //
 //////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>

 char DisplayConvert(char Cvalue)
 {


    if(Cvalue >= 'a' && Cvalue <= 'z'){ //a=97 z=122
        
        printf ("%c", Cvalue - 32);
    }

    else if (Cvalue >= 'A' && Cvalue <= 'Z') // A=65 Z=90

    {
        printf ("%c", Cvalue + 32);

    }
    
 }


 int main(){

   char cValue ='\0';

   printf("Enter character : "); //a
   scanf("%c", &cValue);

   DisplayConvert(cValue);
   
   return 0;
 }