/*Program to add and subtract using add() & sub() function
 * returning value to main function and then putting it to a variable
 * then print the variable*/

#include <stdio.h>

float add(float a, float b);
float sub(float c, float d);
float mul(float k, float l);
float div(float m, float n);

/*Main function starts here*/

int main(void)
{
	float e, f;

	printf("Enter 1st number: ");
	scanf("%f", &e);

	printf("Emter 2nd number: ");
	scanf("%f", &f);

	printf("%.2f + %.2f = %.2f\n", e, f, add(e, f));
	printf("%.2f - %.2f = %.2f\n", e, f, sub(e, f));
	printf("%.2f x %.2f = %.2f\n", e, f, mul(e, f));
	printf("%.2f / %.2f = %.2f\n", e, f, div(e, f));
}

/*End of Program*/

float add(float a, float b)		/*Add function*/
{
	float add;
	add = a + b;
	return (add);
}

float sub(float c, float d)		/*Subtract function*/
{
	float sub;
	sub = c - d;
	return (sub);
}

float mul(float k, float l)		/*Multiply Function*/
{
	float mul;
	mul = k * l;
	return (mul);
}

float div(float m, float n)		/*Division function*/
{
	float div;
	div = m / n;
	return (div);
}
