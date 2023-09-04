#include <stdio.h>

int main()
{
    int a, b, sum, diff, mul, rem;
    float div;
    printf("Enter a number for a: ");
    scanf("%d",&a);
    printf("Enter a number for b: ");
    scanf("%d",&b);


    sum=a+b;
    diff=a-b;
    mul=a*b;
    div=a/b;
    rem=a%b;

    printf("the addition is:%d \n",sum);
    printf("the substruction is:%d \n",diff);
    printf("the multiplication is:%d \n",mul);
    printf("the division is:%f \n",div);
    printf("the raimaining is:%d \n",rem);




    return 0;
}
