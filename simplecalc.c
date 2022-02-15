/*Program to calculate ADD,SUB,MUL,DIV using switch case*/

#include <stdio.h>

/*Main function starts here*/

int main(void)
{
    typedef float decimal;
    typedef char operation;      /*Rename the identifiers (int, float, etc)*/
    decimal x,y;
    operation op;

    printf("Enter operation: ");
    scanf("%c",&op);

    printf("Enter X and Y: ");
    scanf("%f %f",&x,&y);

    switch (op)     /*Switching the operator here*/
    {
    case '+':
        printf("Addtion of X & Y: %.2f\n",x+y);
        break;

    case '-':
        printf("Subtraction of X & Y: %.2f\n",x-y);
        break;

    case '*':
        printf("Multiplication of X & Y: %.2f\n",x*y);
        break;

    case '/':
        printf("Division of X & Y: %.2f\n",x/y);
        break;
    
    default:
        printf("Enter correct parameters, Exiting program...\n");
        break;
    }    
}

/*End of program*/