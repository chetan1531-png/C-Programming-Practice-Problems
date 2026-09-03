#include <stdio.h>
int main() 
{
    int size = 5;
    int arr[6] = {10, 20, 30, 40, 50}; 
    int element = 35;
    int position = 4; 
    int i;
    printf("Initial array (size %d): 10, 20, 30, 40, 50\n", size);
    int index = position - 1; 
    if (index < 0 || index > size) 
    {
        printf("Invalid position for insertion.\n");
        return 1;
    }
    for (i = size; i > index; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
    size++;
    printf("Array after inserting %d at position %d (index %d):\n", element, position, index);
    for (i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}