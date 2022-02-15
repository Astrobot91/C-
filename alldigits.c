/*Program that displays the number digits in descending order*/

#include <stdio.h>
#include <math.h>

/*The Main Function Starts here*/

int main(void)
{
    float n, o;
    int p = 0, count = 0;
    printf("Enter random digit: ");
    scanf("%f", &n);
    printf("%i", (int)n);

    /*While loop to count the number of digits in N*/

    while (10 < n)
    {
        n = n / 10;
        count++;
    }

    /*Retaining Value of N Shifting to O by mulltiplying it by 10^count*/

    o = n * pow(10, count);

    /*While loop to print digits in descending order using value of count for powering 10
    and diving it my Value of O*/

    while (count > 0)
    {
        p = pow(10, count);
        o = (int)o % (int)p; /*Keeping it simple as INT*/
        printf("\n%i", (int)o);
        count--;
    }
}

/*End of Program*/