#include <stdio.h>
int main() 
{
    int num = 1234, reversed = 0, remainder;
    int originalNum = num;
    while (num != 0)
    {
        remainder = num % 10;       
        reversed = reversed * 10 + remainder; 
        num /= 10;
    }
    printf("Original number: %d\n", originalNum);
    printf("Reversed number: %d\n", reversed);
    return 0;
}