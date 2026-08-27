#include <stdio.h>
int main()
{
    int a=5;
    int b=10;
    int temp=0;
    printf("Before swapping :%d %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping :%d %d\n",a,b);
    return 0;
}