#include <stdio.h>
#include <stdlib.h>

int main(){

    float C, F;

    printf("ecrire la temperature de fahrenheit: ");
    scanf("%f", &F);

    C= (F - 32) / 1.8;

    printf("la temperature de celsius est:%.2f ", C);


    return 0;
}
