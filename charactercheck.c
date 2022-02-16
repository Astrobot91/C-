/*Program to check if character is alphanumeric, number or an alphabet*/

#include <stdio.h>
#include <ctype.h>      /*This header file contains isalpha. isdigit, etc functions*/
 
 /*Main function starts here*/

 int main(void)
 {
     char character;

     printf("Enter character: ");
     character = getchar();

     if (isalpha(character) > 0)
     {
         printf("Entered character is an Alphabet.\n");
     }
     else if (isdigit(character) > 0)
     {
         printf("Entered character is a Number.\n");
     }
     else
     {
         printf("Entered character is Alphanumberic.\n");
     }
 }

 /*End of program*/