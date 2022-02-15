/*Program to add digits of a given number*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float n, count = 0, sum = 0; 
    int i = 1, p;

    printf("Enter the number: ");
    scanf("%f", &n);

    while (10 < n)
    {
        n = n / 10;
        count++;
    }
}
