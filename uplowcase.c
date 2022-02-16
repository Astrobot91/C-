/*Program to convert uppercase to lowercase and viceversa*/

#include <stdio.h>
#include <ctype.h>

/*Main function starts here*/

int main(void)
{
    char c;
    printf("Enter a character: ");
    c = getchar();
    if (isalpha(c) > 0)
    {
        if (islower(c) > 0)
        {
            putchar(toupper(c));    /*TOUPPER converts lowercase to uppercase*/
        }
        else 
        {
            putchar(tolower(c));    /*TOLOWER converts uppercase to lowercase*/
        }
    }
    else 
    {
        printf("Input invalid\n");
    }
}

/*End of program*/