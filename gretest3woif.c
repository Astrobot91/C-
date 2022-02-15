/*Print greatest of 3 numbers without using IF condition*/

#include <stdio.h>

/*Main function starts here*/

int main(void)
{
    int a, b, c, i = 1;

    printf("Enter A: ");
    scanf("%i", &a);

    printf("Enter B: ");
    scanf("%i", &b);

    printf("Enter C: ");
    scanf("%i", &c);

    while (a > b && a > c && i > 0)
    {
        printf("\nA is the greatest\n"); /*Declared i = 1 for printing once*/
        i--;
    }
    while (b > a && b > c && i > 0)
    {
        printf("\nB is the greatest\n");
        i--;
    }
    while (c > b && c > a && i > 0)
    {
        printf("\nC is the greatest\n");
        i--;
    }
}

/*End of program*/