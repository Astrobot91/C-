#include <stdio.h>

 int main()
{
	char unit;
	float cel, far;
	printf("Temperature Converter.\nTo convert Celsius to Fahrenheit, Press 'C'\n");
	printf("To convert Fahrenheit to Celsius, Press 'F'\nEnter parameter:");
	scanf("%c",&unit);

	switch(unit)
	{
	case 'C':
		printf("Enter Temperature in Celsius:");
		scanf("%f",&cel);
		float F = (9*cel)/5 + 32;
		printf("%.1fF",F);
		break;

	case 'F':
		printf("Enter Temperature in Fahrenheit:");
		scanf("%f",&far);
		float C = 5*(far-32)/9;
		printf("%.1fC",C);
		break;
	
	default:
		printf("Choose correct parameters.\nExiting program");
	}
	
}
