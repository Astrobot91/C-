/*This program prints out a Rhombus when given the value of half of the diagonal*/

#include <stdio.h>

/*Main function starts here*/

int main(void)
{
	int n, tmp, o;

	printf("Enter the value of half diagonal of Rhombus: ");
	scanf("%d", &n);

	tmp = o = n;

/*Upper triangle formation Loop*/

	for (int x = 0; x < n; x++)
	{
		for (int y = 1; o >= y; y++)	/*This Loop prints blank Inverted triangle to give the necessary shape*/
		{
			printf(" ");
		}
		o--;

		for (int z = 1; z <= x; z++)	/*This Loop prints Visible normal Triangle*/
		{
			printf("#");
		}

		for (int z = 1; z <= x; z++)	/*This Loop prints Visible normal Triangle*/
		{
			printf("#");
		}
		printf("\n");
	}

/*Lower triangle formation Loop*/

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)		/*This Loop prints normal blank triangle to give necessary shape*/
		{
			printf(" ");
		}

		for (int k = 1; tmp >= k; k++)		/*This Loop prints Inverted visible triangle*/
		{
			printf("#");
		}

		for (int k = 1; tmp >= k; k++)		/*This Loop prints Inverted visible triangle*/
		{
			printf("#");
		}
		tmp--;

		printf("\n");
	}
	printf("\n");
}

/*End of program*/