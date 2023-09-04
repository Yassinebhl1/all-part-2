#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,I3,I,I2;
    printf("enter a nombre: ");
    scanf("%d",&num);

    I=num%10;
    I2=(num%100)/10;
    I3=num/100;


    printf("l'inverse de nombre est:%d%d%d ",I,I2,I3);



    return 0;
}
