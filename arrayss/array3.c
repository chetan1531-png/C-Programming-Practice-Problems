#include <stdio.h>
int main()
{
    int size = 6;
    int arr[6] = {55, 12, 89, 4, 30, 77};
    int i;
    int max, min;
    max = arr[0];
    min = arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
        if (arr[i] < min) 
        {
            min = arr[i];
        }
    }
    printf("Array elements: 55, 12, 89, 4, 30, 77\n");
    printf("Maximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);
    return 0;
}