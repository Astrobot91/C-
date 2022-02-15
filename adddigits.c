/*Program to add digits of a given number*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, count = 0, sum = 0; 
    int i = 1, p;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n>0)
    {
        sum+=n%10;
	n=n/10;
    }

    printf("%d\n", sum);
}
