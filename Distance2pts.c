#include <stdio.h>
#include <math.h>

void distance_btwn_2pts(void);
int main()
{
    distance_btwn_2pts();
}

void distance_btwn_2pts(void)
{
    float x1, x2, y1, y2, dist;
    printf("Enter X1 & X2: ");
    scanf("%f %f",&x1, &x2);
    printf("Enter Y1 & Y2: ");
    scanf("%f %f",&y1, &y2);
    dist = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf("Distance between 2 points: %.2f units", dist);
}