#include <stdio.h>

int questionmark(void);

int main(void)
{
	int c = questionmark();
	for (int i = 0; i < c; i++)
	{
		printf("?");
	}
}

int questionmark(void)
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
	}
	while (n < 1);
	return n;
}
