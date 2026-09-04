#include <stdio.h>
int main() 
{
    int num = 121, reversed = 0, originalNum;
    originalNum = num;
    while (num > 0)
    {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    if (originalNum == reversed)
    {
        printf("%d is a PALINDROME number.\n", originalNum);
    }
    else 
    {
        printf("%d is NOT a palindrome number.\n", originalNum);
    }
    return 0;
}