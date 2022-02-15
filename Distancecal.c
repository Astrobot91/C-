/*Program to calculate Distance of an object by First Law of motion*/

#include <stdio.h>
#include <math.h>

/*Main function starts here*/

int main(void)
{
    float S, u, a, t;

    printf("Enter the Initial Velocity in m/s: ");
    scanf("%f", &u);

    printf("Enter Time in seconds: ");
    scanf("%f", &t);

    printf("Enter the Acceleration in m/s2: ");
    scanf("%f", &a);

    S = (u * t) + (0.5 * a * pow(t, 2));

    printf("Distance travelled = %.2fm", S);
}

/*End of program*/