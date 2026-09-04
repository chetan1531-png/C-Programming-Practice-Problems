#include <stdio.h>
int main() 
{
    int N = 20, i;
    printf("Odd numbers from 1 to %d:\n", N);
    for (i = 1; i <= N; i++)
    {
        if (i % 2 == 0) 
        {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}