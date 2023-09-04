#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, sum;
    float moy;
    printf("enter a number of a: ");
    scanf("%d",&a);
    printf("enter a number of b: ");
    scanf("%d",&b);
    printf("enter a number of c: ");
    scanf("%d",&c);

    sum = a+b+c;
    moy = sum/3;

    printf("the somme is:%d \n",sum);
    printf("the average is:%f \n",moy);





    return 0;
}
