/*Program to add digits of a given number*/

#include <stdio.h>

/*Main function starts here*/

int main(void)
{
    int n, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        sum += n % 10; /*Take value of N, Divide by 10 and Value of Remainder is added into SUM*/
        n = n / 10;    /*Divide number by 10, as n = INT, Last digit gets neglected and loop continues*/
    }

    printf("\nTotal sum of all digits = %d\n", sum);
}

/*End of Program*/