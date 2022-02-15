/*Program to print table of sin and cos*/

#include <stdio.h>
#include <math.h>
#define DEG 3.142/180

/*Main program starts here*/
c
int main(void)
{
    float c;
    printf("Degree        SIN             COS\n");
    for (int i = 0; i <= 180; i = i + 15)
    {
        c = i * DEG;
        printf("%4.1i          %3.2f            %.2f\n",i, sin(c), cos(c));
    }
}

/*End of program*/