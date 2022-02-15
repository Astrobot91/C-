/* N time coughing program */

#include <stdio.h>
#include <stdlib.h>

void cough(void);

int main(void)		/* Main program */
{
        cough();
}


void cough(void) 	/* Void cough program starts here */
{
	int c;
	do
	{
	printf("Enter number: ");
	scanf("%i",&c);
	}
	while (c<1);

    	for (int i=0;i<c;i++)
       	{	
		printf("Cough\n");
       	}
}
