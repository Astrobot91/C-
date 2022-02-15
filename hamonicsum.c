#include <stdio.h>

float harmonicsum(void);
int main()
{
    printf("Harmonic sum = %.2f", harmonicsum());
}

float harmonicsum(void)
{
    float i,n,sum = 0;
    printf("Enter the value of N:");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + (1/i);
    }
    return(sum);
}