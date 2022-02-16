/*Program to read characters until 'a' is pressed*/

#include <stdio.h>

/*Main function starts here*/

int main(void)
{
    char character;
    
    printf("Enter a character: ");

    while (character != 'a') /*This loop breaks when value of character = a; a is fetched by getchar() and stored in character*/
    {
        character = getchar();
    }

    printf("character: %i\n", (int)character);  /*Displays 'a' is stored in character = End of while loop*/
}

/*End of program*/