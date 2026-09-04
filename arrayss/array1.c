#include <stdio.h>
int main()
{
    int size;
    printf("enter the  number of elements (size of array):");
    scanf("%d",&size);
    int arr[size];
    int i;
    printf("Enter %d integers : \n",size);
    for(i=0;i<size;i++)
    {
        printf("Element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Elements stored in the array are :");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}