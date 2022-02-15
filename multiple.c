/*Program to find if m is a multiple of n*/

#include <stdio.h>

/*Main function starts here*/

int main(void)
{
    int m,n,p;

    printf("Enter N (Bigger value): ");
    scanf("%i", &n);

    printf("Enter M (Smaller value): ");
    scanf("%i", &m);

    if (n % m == 0)
    {
        printf("M is a multiple of N");
    }
    else
    {
        printf("M is not a multiple of N");
    }
}