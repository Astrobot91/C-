/*Program to read customer codes and print bill for each customer with the given conditions*/

#include <stdio.h>
#define COST 250
#define EXTRACOST 1.25

/*Main function starts here*/

int main(void)
{
    int n,c;

    printf("Enter the number of calls made by customer: ");
    scanf("%i", &n);
    if (n <= 100)
    {
        printf("Customer's bill: %i", COST);
    }
    else if (n > 100)
    {
        c = n - 100;
        printf("Customer's bill: %i + %.2f = %.2f", COST, EXTRACOST * c, COST + (EXTRACOST * c));
    }
}

/*End of program*/