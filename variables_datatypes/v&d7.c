#include <stdio.h>
int main()
{
    int a=5;
    int b=10;
    printf("Before swapping :%d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping :%d %d\n",a,b);
    return 0;
}