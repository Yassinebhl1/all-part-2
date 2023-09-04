#include <stdio.h>
#include <math.h>

int main()
{
    float dist, X1, X2, Y1, Y2;
    printf("enter for nomber of X1: ");
    scanf("%f",&X1);
    printf("enter for nomber of Y1 ");
    scanf("%f",&Y1);
    printf("enter for nomber of X2: ");
    scanf("%f",&X2);
    printf("enter for nomber of Y2 ");
    scanf("%f",&Y2);


    dist = sqrt((pow((X2-X1),2)+pow((Y2-Y1),2)));
    printf("the distance of MN:%f",dist);








    return 0;
}
