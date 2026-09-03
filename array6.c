#include <stdio.h>
int main() {
    int size = 5;
    int source_arr[5] = {1, 2, 3, 4, 5};
    int dest_arr[5]; 
    int i;
    printf("Source array elements: ");
    for (i = 0; i < size; i++) 
    {
        printf("%d ", source_arr[i]);
    }
    printf("\n");
    for (i = 0; i < size; i++) 
    {
        dest_arr[i] = source_arr[i];
    }
    printf("Destination array elements: ");
    for (i = 0; i < size; i++) 
    {
        printf("%d ", dest_arr[i]);
    }
    printf("\n");
    return 0;
}