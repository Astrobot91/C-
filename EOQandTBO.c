/*Program to calculate Economic Order Quantity (EOQ) and Time Between Order (TBO)*/

#include <stdio.h>
#include <math.h>

/*Main function starts here*/

int main(void)
{
    int dr, sc, hc;
    float eoq, tbo;
    {
        printf("Enter Demand Rate - Items per unit time: ");
        scanf("%d", &dr);

        printf("Enter Setup Cost - Per Order: ");
        scanf("%d", &sc);

        printf("Enter Holding Cost - Per item per unit time: ");
        scanf("%d", &hc);

        eoq = sqrt((2 * dr * sc) / hc);
        tbo = sqrt((2 * sc) / (dr * hc));

        printf("\nYour Economic Order Quantity EQO: %.2f\n", eoq);
        printf("Your Time Between Order TBO: %.2f", tbo);
    }
}

/*End of Program*/