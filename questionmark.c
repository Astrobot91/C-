/*Program to Print question marks by taking user input*/

#include <stdio.h>

int questionmark(void);

/*Main function starts here*/

int main(void)
{
	int c = questionmark();
	for (int i = 0; i < c; i++)		/*Loop to print ? n times n = given by user*/
	{
		printf("?");
	}
}

int questionmark(void)		/*Function to take positive value from user*/
{
	int n;
	do
	{
		printf("Enter Width:");
		scanf("%i",&n);

		if (n < 1)
		{
		printf("Enter a positive integer\n");
		}
	} while (n < 1);

	return n;
}
