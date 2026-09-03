#include <stdio.h>
int main()
{
    int size=6;
    int arr[6]={10,20,30,40,50,60};
    int position=3;
    int i;
    printf("Initial array : 10,20,30,40,50,60\n",size);
    int index=position-1;
    if (index < 0 || index >= size) 
    {
        printf("Invalid position for deletion.\n");
        return 1;
    }
    for (i = index; i < size - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("Array after deleting %d(index %d):\n",position,index);
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}