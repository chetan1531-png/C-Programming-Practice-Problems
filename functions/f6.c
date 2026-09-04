#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a; 
    *a = *b; 
    *b = temp;
    printf("Inside swap: values are now %d and %d\n", *a, *b);
}
int main()
{
    int x = 10;
    int y = 20;
    printf("In main: Before swap x = %d y = %d\n", x, y);
    swap(&x, &y); 

    printf("In main: After swap x = %d   y = %d\n", x, y); 
    return 0;
}