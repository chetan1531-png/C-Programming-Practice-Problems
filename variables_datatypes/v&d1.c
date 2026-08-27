#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter first integer :");
    scanf("%d",&a);
    printf("Enter second integer :");
    scanf("%d",&b); 
    int sum,difference,product;
    float quotient;
    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=(float)a/b;
    printf("The sum is=%d\n",sum);
    printf("The difference is=%d\n",difference);
    printf("The product is=%d\n",product);
    printf("The qoutient is=%f\n",quotient);
    return 0;
}