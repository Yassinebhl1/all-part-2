#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int a, b;
    int result;

    printf("enter the number of a: ");
    scanf("%d",&a);
    printf("enter the number of b: ");
    scanf("%d",&b);

    result = a + b;
    printf("the Addition of the two number is :%d\n",result);

    result = a - b;
    printf("the substraction of the two number is :%d\n",result);

    result = a * b;
    printf("the multiplication of the two number is :%d\n",result);

    result = a / b;
    printf("the devision of the two number is :%d\n",result);

    result = a % b;
    printf("the rest of the division is :%d\n",result);


    return 0;
}
