#include <stdio.h>
#include <limits.h>
int main() 
{
    int max_int = INT_MAX;
    printf("Maximum value of int: %d\n", max_int);
    int overflow_int = max_int + 1;
    printf("After incrementing: %d\n", overflow_int);
    return 0;
}