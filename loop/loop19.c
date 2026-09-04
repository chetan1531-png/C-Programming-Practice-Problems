#include <stdio.h>
int main() {
    int N = 3, i, j;
    for (i = N; i >= 1; i--)
    {    
        for (j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}