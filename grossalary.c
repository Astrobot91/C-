/*Program to Calculate and display monthly gross salary*/

#include <stdio.h>

/*Main function starts here*/

int main()
{
    float mbs = 1500, bonus = 200;
    float n, c, p, gross;

    printf("Enter the number of computers sold: ");
    scanf("%f", &n);

    printf("Enter the amount of monthly sales:");
    scanf("%f", &p);

    printf("\n");

    c = (p * 2) / 100;
    gross = mbs + (n * bonus) + c;

    printf("Monthly Base Salary: %.2f\n", mbs);
    printf("Added Bonus: %.2f\n", n * bonus);
    printf("Commission on this month sale 2%%: %.2f\n", c);
    printf("Gross salary: %.2f", gross);
}

/*End of program*/