/*Program to add and subtract using add() & sub() function
 * returning value to main function and then putting it to a variable
 * then print the variable*/

#include <stdio.h>

float add(float a, float b);
float sub(float c, float d);
float mul(float k, float l);
float div(float m, float n);

int main()
{
	float e,f,g,h,i,j;

	printf("Enter 1st number:");
	scanf("%f",&e);

	printf("Emter 2nd number:");
	scanf("%f",&f);

	g = add(e,f);
	h = sub(e,f);
	i = mul(e,f);
	j = div(e,f);

	printf("%.2f + %.2f = %.2f\n", e,f,g);
	printf("%.2f - %.2f = %.2f\n", e,f,h);
	printf("%.2f x %.2f = %.2f\n", e,f,i);
	printf("%.2f / %.2f = %.2f\n", e,f,j);


}

float add(float a, float b)
{
	float add;
	add = a+b;
	return(add);
}

float sub(float c, float d)
{
	float sub;
	sub = c-d;
	return(sub);
}

float mul(float k, float l)
{
	float mul;
	mul = k*l;
	return(mul);
}

float div(float m, float n)
{
	float div;
	div = m/n;
	return(div);
}

