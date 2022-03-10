/*Program to draw graph between Resistance(r) and Time(t)*/

#include <stdio.h>
#include <math.h>

#define LAMBDA 0.001
#define EXP 2.718

/*Main Function starts here*/

int main(void)
{
    int t;
    float r, mul;

    printf("Enter the Time in Hours: ");
    scanf("%d", &t);

    for (int k = 0 ; k <= 104; k++)     /*prints the upper line, * can never exceed 100 so used 104*/
    {
        printf("_");
    }

    printf("\n");

    for (int i = 0; i <= t; i = i + 200)    /*This Loop calculates the value of r*/
    {
    mul = -LAMBDA * i;
    r = pow(EXP, mul);
    r = r * 100;
    
    printf("|");

        for (int j = 0; j <= r; j++)    /*This Loop prints * horizontally r times*/
        {
            printf("*");
        }
        printf("#\n");
    }
}

/*End of program*/