#include <stdio.h>
#include <math.h>

void root(void);
int main()
{
    root();
}

void root(void)
{
    float a,b,c,d,root1,root2;
    printf("Enter the values of Quadratic equation: ");
    scanf("%f %f %f",&a,&b,&c);
    d = b*b - 4*a*c;
    if (d < 0)
    {
        printf("The discriminant is imaginary!\n");
    }
    else 
    {
    root1 = (-b + sqrt(d)) / (2*a);
    root2 = (-b - sqrt(d)) / (2*a);
    printf("Root1 = %.2f\nRoot2 = %.2f\n",root1,root2);
    }
}