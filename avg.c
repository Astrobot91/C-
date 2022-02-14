#include <stdio.h>

float avg(void);
int main(void)
{
    printf("Average of numbers: %.2f\n",avg());
    return 0;
}

float avg(void)
{
    float i,n,number,sum=0,avg;
    printf("Enter number of values:");
    scanf("%f",&n);
    printf("Enter numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%f",&number);
        sum = sum + number;
        avg = sum/n;
    }
    return (avg);
}