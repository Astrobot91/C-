/*Program to Calculate Harmonic sum of N numbers*/

#include <stdio.h>

float harmonicsum(void);

/*Main function starts here*/

int main()
{
    printf("Harmonic sum = %.2f", harmonicsum());
}

/*End of program*/

float harmonicsum(void) /*Function to calculate harmonic sum*/
{
    float i, n, sum = 0;
    printf("Enter the value of N: ");
    scanf("%f", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (1 / i);
    }
    return (sum);
}