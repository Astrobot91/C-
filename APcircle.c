#include <stdio.h>
#include <math.h>

#define PI 3.14

int main()
{
    float x1, x2, y1, y2, dist;
    printf("Enter X1 & X2 Center of the circle: ");
    scanf("%f %f",&x1, &x2);
    printf("Enter Y1 & Y2 Random point on Perimeter: ");
    scanf("%f %f",&y1, &y2);
    dist = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf("Perimeter of circle: %.2f\n",2*PI*dist);
    printf("Area of circle: %.2f", PI*pow(dist,2));
    return 0;
}

