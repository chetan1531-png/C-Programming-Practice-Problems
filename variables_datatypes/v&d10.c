#include <stdio.h>
int main()
{
    int a,b,c;
    float average;
    printf("Enter three values");
    scanf("%d %d %d",&a,&b,&c);
    average=(float)(a+b+c)/3;/*brackets is used after chatgpt*/
    printf("The average is=%f",average);
    return 0;
}