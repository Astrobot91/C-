#include <stdio.h>

void interestrate(void);

int main(void)
{
	interestrate();
}





void interestrate(void)
{
	float inr, inv, val;
	int t;
	printf("Please enter your initial Investment:");
	scanf("%f",&inv);
	printf("Enter Period in years:");
	scanf("%i",&t);
	printf("Enter the Interest Rate:");
	scanf("%f",&inr);
	printf("\n");
	
	printf("Initial Investment: %.2f\n", inv);
	printf("Period/Span: %i years\n", t);
	printf("Interest rate: %.2f", inr);
	printf("%%\n");
	printf("\n");

	for(int j = 0; j < t; j++)
	{
		val = inv + inv*(inr/100);
		inv = val;
		printf("year %i		%.2f\n", j+1, val);
	}
}
