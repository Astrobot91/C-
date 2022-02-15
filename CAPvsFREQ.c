/*Program to study the variation of frequency and capacitance, calculate frequency for different values*/

#include <stdio.h>
#include <math.h>

void freq_vs_cap(void);

/*Main function starts here*/

int main(void)
{
    freq_vs_cap();
}

/*End of program*/


void freq_vs_cap(void)      /*Function to calcuate Frequency by inputting capacitance*/
{
    float cap, freq, n, l, r;

    /*const float l = 0.01, r = 9*/

    printf("Enter Start Value of Capacitance in Farads: ");
    scanf("%f", &cap);

    printf("Enter the End Value of Capacitance in Farads: ");
    scanf("%f", &n);

    printf("Enter Value of Resistance and Inductance respectively: ");
    scanf("%f %f", &r, &l);

    printf("\nFrequency      vs         Capacitance\n");

    while (cap <= n)
    {
        freq = sqrt((1 / (l * cap)) - (pow(r, 2) / (4 * pow(cap, 2))));
        printf("%.1fHz                       %.2fF\n", freq, cap);
        cap = cap + 0.01;
    }
}