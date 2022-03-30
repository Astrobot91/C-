/*This program prints a diamond shape when given the Radius/2 Value of the Diamond*/

#include <stdio.h>

/*Main function starts here*/

int main(void)
{
    int n, tmp, o, N, TMP, O;

    printf("Enter the value of triangle: ");
    scanf("%d", &n);

    tmp = o = n;
    N = 2*n;
    TMP = O = N;

    printf("\n");

/*Prints the upper part of the diamond*/

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; o > j; j++)     /*Prints blank Inverted triangle*/
        {
            printf(" ");
        }
        o--;

        for (int k = 1; k <= i; k++)        /*Prints Left side triangle*/
        {
            printf("#");
        }

        for (int l = 1; l <= n; l++)        /*Prints Leftside Square*/
        {
            printf("#");
        }

        for (int l = 1; l <= n; l++)        /*Prints Rightside Square*/
        {
            printf("#");
        }

        for (int k = 1; k <= i; k++)        /*Prints Right side triangle*/
        {
            printf("#");
        }

        printf("\n");
    }

/*Prints the lower part of the diamond*/

    for (int x = 0; x < N; x++)
    {
        for (int y = 0; y <= x; y++)        /*Prints the blank triangle*/
        {
            printf(" ");
        }

        for (int z = 1; TMP > z; z++)       /*Prints the Left side triangle*/
        {
            printf("#");
        }

        for (int z = 1; TMP > z; z++)       /*Prints the Right side triangle*/
        {
            printf("#");
        }
        TMP--;

        printf("\n");
    }
    printf("\n");
}

/*End of Program*/