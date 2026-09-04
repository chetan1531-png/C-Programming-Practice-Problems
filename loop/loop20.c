#include <stdio.h>
int main()
{
    for (int n = 1; n <= 10; n++)
    {
        printf("Table of %d\n", n);
        for (int i = 1; i <= 10; i++)
        {
            int product = n*i;
            printf("%d x %d = %d\n", n, i, product);
        }
        printf("\n");
    }
    return 0;
}