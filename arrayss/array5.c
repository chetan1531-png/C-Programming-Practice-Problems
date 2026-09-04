#include <stdio.h>
int main() 
{
    int size = 7;
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int temp;
    int i;
    printf("Original array: ");
    for(i=0;i<size;i++) 
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    for(i=0;i<size/2;i++) 
    {
        temp=arr[size-1-i];
        arr[size-1-i]=arr[i];
        arr[i]=temp;
    }
    printf("Reverse array: ");
    for (i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}