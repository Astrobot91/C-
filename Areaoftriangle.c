#include <stdio.h>
#include <math.h>

void area_triangle(void);

int main()
{
	area_triangle();	
}

void area_triangle(void)
{
	int a,b,c;
	float S,A;
	printf("Enter sides of triangle:");
	scanf("%i %i %i",&a,&b,&c);
	S = (a+b+c)/2;
	A = sqrt(S*(S-a)*(S-b)*(S-c));
	printf("Area of triangle = %.2f", A);
}
