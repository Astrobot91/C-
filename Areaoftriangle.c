/*Program to Calculate Area of triangle by Heron's formula*/

#include <stdio.h>
#include <math.h>

void area_triangle(void);

/*Main Function starts here*/

int main()
{
	area_triangle();
}

/*End of Program*/

void area_triangle(void)		/*Function to calculate area of triangle*/
{
	int a, b, c;
	float S, A;

	printf("Enter sides of triangle: ");
	scanf("%i %i %i", &a, &b, &c);

	S = (a + b + c) / 2;
	A = sqrt(S * (S - a) * (S - b) * (S - c));

	printf("Area of triangle = %.2f", A);
}
