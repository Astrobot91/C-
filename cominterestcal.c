/*Program to calculate Compound Interest of Investments*/

#include <stdio.h>

/*Main function starts here*/

int main(void)
{
    float principal, interest, time, rate, sum, temp;       /*SUM & TEMP have no meaning here, random names for variable*/

    printf("Enter the Initial Investment amount: ");
    scanf("%f", &principal);
    printf("Enter the Tenure of Investment in years/Months: ");
    scanf("%f", &time);
    printf("Enter the Interest Rate in Years/Months: ");
    scanf("%f", &interest);
    printf("\n");

    temp = sum = principal;     /*TEMP and SUM are declared to put value of PRINCIPAL at different variables*/

    for (int i = 1; i <= time; i++)
    {
        rate = ((principal * interest) / 100);
        principal += rate;

        printf("%-d Year/Month End %25.2f\n", (int)i, principal);

        principal += sum;       /*SUM has value of initial investment, this is used for compounding*/
    }
}

/*End of Program*/