#include <stdio.h>
void add_num(int a,int b)
{
    int sum =a+b;
    printf("The sum of %d and %d is : %d\n",a,b,sum);
}
int main()
{
    int a=15;
    int b=7;
    add_num(a,b);
    add_num(1,2);
    return 0;
}