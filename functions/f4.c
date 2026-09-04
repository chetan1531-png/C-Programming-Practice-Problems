#include <stdio.h>
int is_even(int num);
int main() 
{
    int check_num = 14;
    if (is_even(check_num)) 
    {
        printf("%d is even.\n", check_num);
    } 
    else
    {
        printf("%d is odd.\n", check_num);
    }
    return 0;
}
int is_even(int num) 
{
    if (num % 2 == 0) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}