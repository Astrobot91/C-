/*Program to print last to digits*/

#include <stdio.h>
#include <math.h>

/*Main function starts here*/

int main(void)
{
    float x, p;
    printf("enter a value :");
    scanf("%f", &x);
    p = fmod(x,100);
    printf("Last 2 digits = %d", (int)p);
}

/*End of program*/