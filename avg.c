/*Program to Calculate Average of N values*/

#include <stdio.h>

float avg(void);

/*Main Function starts here*/

int main(void)
{
    printf("Average of numbers: %.2f\n", avg());
    return 0;
}

/*End of program*/

float avg(void)     /*Function to Calculate Average of N numbers*/
{
    float i, n, number, sum = 0, avg;
    printf("Enter number of values: ");
    scanf("%f", &n);

    printf("Enter numbers: ");

    for (i = 0; i < n; i++) /*This loop adds input numbers into SUM*/
    {
        scanf("%f", &number);
        sum = sum + number;
    }
    avg = sum / n;
    return (avg);
}