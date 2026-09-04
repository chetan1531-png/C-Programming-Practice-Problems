#include <stdio.h>
int main()
{
    int num = 12568, count = 0;
    {
        if (num == 0) 
        count = 1;
    }
    int temp = num;
        temp = temp / 10;
        count++;

    printf("The number of digits in %d is: %d\n", num, count);
    return 0;
}