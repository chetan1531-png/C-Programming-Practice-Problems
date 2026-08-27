#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter first value :");
    scanf("%f",&a);
    printf("Enter second value :");
    scanf("%f",&b);
    float sum,difference,product;
    sum=(float)a+b;
    difference=(float)a-b;
    product=(float)a*b;
    printf("The sum of =%f\n",sum);
    printf("The difference is=%f\n",difference);
    printf("The product of =%f\n",product);
    return 0;
}