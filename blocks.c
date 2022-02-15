/*Print Square blocks by taking user's input*/

#include <stdio.h>

/*Main Function starts here*/

int main(void)
{
    int n;

    do      /*Prompts user to put Natural numbers*/
    {
        printf("Enter parameter: ");
        scanf("%i", &n);
    } while (n <= 0);

    for (int i = 0; i < n; i++)     /*First loop to print ## horizontally*/
    {
        for (int j = 0; j < n; j++)     /*Second loop to print horizontal rows below one by one*/
        {
            printf("##");
        }
        printf("\n");       /*To print ### on the next line as horizontal print is completed*/
    }
}

/*End of Program*/
