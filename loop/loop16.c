#include <stdio.h>
int main() {
    int base = 5, exponent = 3, i;
    long long result = 1; 
    if (exponent == 0) 
    {
        result = 1;
    }
    else 
    {
        for (i = 1; i <= exponent; i++) 
        {
            result *= base;
        }
    }
    printf("%d^%d = %lld\n", base, exponent, result);
    return 0;
}