/*Program to add digits of a given number*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }

    printf("\nTotal sum of all digits = %d\n", sum);
}
