/*Program to find the roots of the quadratic equation by taking values of a,b & c*/

#include <stdio.h>
#include <math.h>

void root(void);

/*Main function starts here*/

int main()
{
    root();
}

/*End of program*/

void root(void)     /*Function to calculate roots*/
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